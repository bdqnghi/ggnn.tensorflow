static private int read4LE(RandomAccessFile f) throws EOFException, IOException {
    return swapEndian(f.readInt());
}
