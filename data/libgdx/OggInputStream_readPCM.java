/**
 * Decode the OGG file as shown in the jogg/jorbis examples
 */
private void readPCM() {
    boolean wrote = false;
    while (true) {
        // we repeat if the bitstream is chained
        if (endOfBitStream) {
            if (!getPageAndPacket()) {
                break;
            }
            endOfBitStream = false;
        }
        if (!inited) {
            inited = true;
            return;
        }
        float[][][] _pcm = new float[1][][];
        int[] _index = new int[oggInfo.channels];
        // The rest is just a straight decode loop until end of stream
        while (!endOfBitStream) {
            while (!endOfBitStream) {
                int result = syncState.pageout(page);
                if (result == 0) {
                    // need more data
                    break;
                }
                if (result == -1) {
                    // missing or corrupt data at this page position
                    // throw new GdxRuntimeException("Corrupt or missing data in bitstream.");
                    Gdx.app.log("gdx-audio", "Error reading OGG: Corrupt or missing data in bitstream.");
                } else {
                    // can safely ignore errors at
                    streamState.pagein(page);
                    // this point
                    while (true) {
                        result = streamState.packetout(packet);
                        // need more data
                        if (result == 0)
                            break;
                        if (result == -1) {
                        // missing or corrupt data at this page position
                        // no reason to complain; already complained above
                        } else {
                            // we have a packet. Decode it
                            int samples;
                            if (vorbisBlock.synthesis(packet) == 0) {
                                // test for success!
                                dspState.synthesis_blockin(vorbisBlock);
                            }
                            while ((samples = dspState.synthesis_pcmout(_pcm, _index)) > 0) {
                                float[][] pcm = _pcm[0];
                                // boolean clipflag = false;
                                int bout = (samples < convsize ? samples : convsize);
                                // interleave
                                for (int i = 0; i < oggInfo.channels; i++) {
                                    int ptr = i * 2;
                                    // int ptr=i;
                                    int mono = _index[i];
                                    for (int j = 0; j < bout; j++) {
                                        int val = (int) (pcm[i][mono + j] * 32767.);
                                        // might as well guard against clipping
                                        if (val > 32767) {
                                            val = 32767;
                                        }
                                        if (val < -32768) {
                                            val = -32768;
                                        }
                                        if (val < 0)
                                            val = val | 0x8000;
                                        if (bigEndian) {
                                            convbuffer[ptr] = (byte) (val >>> 8);
                                            convbuffer[ptr + 1] = (byte) (val);
                                        } else {
                                            convbuffer[ptr] = (byte) (val);
                                            convbuffer[ptr + 1] = (byte) (val >>> 8);
                                        }
                                        ptr += 2 * (oggInfo.channels);
                                    }
                                }
                                int bytesToWrite = 2 * oggInfo.channels * bout;
                                if (bytesToWrite > pcmBuffer.remaining()) {
                                    throw new GdxRuntimeException("Ogg block too big to be buffered: " + bytesToWrite + " :: " + pcmBuffer.remaining());
                                } else {
                                    pcmBuffer.put(convbuffer, 0, bytesToWrite);
                                }
                                wrote = true;
                                // tell libvorbis how
                                dspState.synthesis_read(bout);
                            // many samples we
                            // actually consumed
                            }
                        }
                    }
                    if (page.eos() != 0) {
                        endOfBitStream = true;
                    }
                    if ((!endOfBitStream) && (wrote)) {
                        return;
                    }
                }
            }
            if (!endOfBitStream) {
                bytes = 0;
                int index = syncState.buffer(BUFFER_SIZE);
                if (index >= 0) {
                    buffer = syncState.data;
                    try {
                        bytes = input.read(buffer, index, BUFFER_SIZE);
                    } catch (Exception e) {
                        throw new GdxRuntimeException("Error during Vorbis decoding.", e);
                    }
                } else {
                    bytes = 0;
                }
                syncState.wrote(bytes);
                if (bytes == 0) {
                    endOfBitStream = true;
                }
            }
        }
        // clean up this logical bitstream; before exit we see if we're
        // followed by another [chained]
        streamState.clear();
        // ogg_page and ogg_packet structs always point to storage in
        // libvorbis. They're never freed or manipulated directly
        vorbisBlock.clear();
        dspState.clear();
        // must be called last
        oggInfo.clear();
    }
    // OK, clean up the framer
    syncState.clear();
    endOfStream = true;
}
