public int read(byte[] buffer) {
    try {
        boolean setup = bitstream == null;
        if (setup) {
            bitstream = new Bitstream(file.read());
            decoder = new MP3Decoder();
        }
        int totalLength = 0;
        int minRequiredLength = buffer.length - OutputBuffer.BUFFERSIZE * 2;
        while (totalLength <= minRequiredLength) {
            Header header = bitstream.readFrame();
            if (header == null)
                break;
            if (setup) {
                int channels = header.mode() == Header.SINGLE_CHANNEL ? 1 : 2;
                outputBuffer = new OutputBuffer(channels, false);
                decoder.setOutputBuffer(outputBuffer);
                setup(channels, header.getSampleRate());
                setup = false;
            }
            try {
                decoder.decodeFrame(header, bitstream);
            } catch (Exception ignored) {
            // JLayer's decoder throws ArrayIndexOutOfBoundsException sometimes!?
            }
            bitstream.closeFrame();
            int length = outputBuffer.reset();
            System.arraycopy(outputBuffer.getBuffer(), 0, buffer, totalLength, length);
            totalLength += length;
        }
        return totalLength;
    } catch (Throwable ex) {
        reset();
        throw new GdxRuntimeException("Error reading audio data.", ex);
    }
}
