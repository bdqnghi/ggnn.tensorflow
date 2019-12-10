/**
 * Get a page and packet from that page
 *
 * @return True if there was a page available
 */
private boolean getPageAndPacket() {
    // grab some data at the head of the stream. We want the first page
    // (which is guaranteed to be small and only contain the Vorbis
    // stream initial header) We need the first page to get the stream
    // serialno.
    // submit a 4k block to libvorbis' Ogg layer
    int index = syncState.buffer(BUFFER_SIZE);
    if (index == -1)
        return false;
    buffer = syncState.data;
    if (buffer == null) {
        endOfStream = true;
        return false;
    }
    try {
        bytes = input.read(buffer, index, BUFFER_SIZE);
    } catch (Exception e) {
        throw new GdxRuntimeException("Failure reading Vorbis.", e);
    }
    syncState.wrote(bytes);
    // Get the first page.
    if (syncState.pageout(page) != 1) {
        // have we simply run out of data? If so, we're done.
        if (bytes < BUFFER_SIZE)
            return false;
        // error case. Must not be Vorbis data
        throw new GdxRuntimeException("Input does not appear to be an Ogg bitstream.");
    }
    // Get the serial number and set up the rest of decode.
    // serialno first; use it to set up a logical stream
    streamState.init(page.serialno());
    // extract the initial header from the first page and verify that the
    // Ogg bitstream is in fact Vorbis data
    // I handle the initial header first instead of just having the code
    // read all three Vorbis headers at once because reading the initial
    // header is an easy way to identify a Vorbis bitstream and it's
    // useful to see that functionality seperated out.
    oggInfo.init();
    comment.init();
    if (streamState.pagein(page) < 0) {
        // error; stream version mismatch perhaps
        throw new GdxRuntimeException("Error reading first page of Ogg bitstream.");
    }
    if (streamState.packetout(packet) != 1) {
        // no page? must not be vorbis
        throw new GdxRuntimeException("Error reading initial header packet.");
    }
    if (oggInfo.synthesis_headerin(comment, packet) < 0) {
        // error case; not a vorbis header
        throw new GdxRuntimeException("Ogg bitstream does not contain Vorbis audio data.");
    }
    // At this point, we're sure we're Vorbis. We've set up the logical
    // (Ogg) bitstream decoder. Get the comment and codebook headers and
    // set up the Vorbis decoder
    // The next two packets in order are the comment and codebook headers.
    // They're likely large and may span multiple pages. Thus we reead
    // and submit data until we get our two pacakets, watching that no
    // pages are missing. If a page is missing, error out; losing a
    // header page is the only place where missing data is fatal. */
    int i = 0;
    while (i < 2) {
        while (i < 2) {
            int result = syncState.pageout(page);
            // Need more data
            if (result == 0)
                break;
            if (result == 1) {
                // we can ignore any errors here
                streamState.pagein(page);
                // at packetout
                while (i < 2) {
                    result = streamState.packetout(packet);
                    if (result == 0)
                        break;
                    if (result == -1) {
                        // We can't tolerate that in a header. Die.
                        throw new GdxRuntimeException("Corrupt secondary header.");
                    }
                    oggInfo.synthesis_headerin(comment, packet);
                    i++;
                }
            }
        }
        // no harm in not checking before adding more
        index = syncState.buffer(BUFFER_SIZE);
        if (index == -1)
            return false;
        buffer = syncState.data;
        try {
            bytes = input.read(buffer, index, BUFFER_SIZE);
        } catch (Exception e) {
            throw new GdxRuntimeException("Failed to read Vorbis.", e);
        }
        if (bytes == 0 && i < 2) {
            throw new GdxRuntimeException("End of file before finding all Vorbis headers.");
        }
        syncState.wrote(bytes);
    }
    convsize = BUFFER_SIZE / oggInfo.channels;
    // OK, got and parsed all three headers. Initialize the Vorbis
    // packet->PCM decoder.
    // central decode state
    dspState.synthesis_init(oggInfo);
    // local state for most of the decode
    vorbisBlock.init(dspState);
    return true;
}
