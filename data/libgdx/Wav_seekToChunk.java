private int seekToChunk(char c1, char c2, char c3, char c4) throws IOException {
    while (true) {
        boolean found = read() == c1;
        found &= read() == c2;
        found &= read() == c3;
        found &= read() == c4;
        int chunkLength = read() & 0xff | (read() & 0xff) << 8 | (read() & 0xff) << 16 | (read() & 0xff) << 24;
        if (chunkLength == -1)
            throw new IOException("Chunk not found: " + c1 + c2 + c3 + c4);
        if (found)
            return chunkLength;
        skipFully(chunkLength);
    }
}
