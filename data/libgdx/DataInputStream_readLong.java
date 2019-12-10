public long readLong() throws IOException {
    long a = readInt();
    long b = readInt() & 0x0ffffffff;
    return (a << 32) | b;
}
