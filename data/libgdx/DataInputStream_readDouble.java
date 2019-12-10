public double readDouble() throws IOException {
    return Double.longBitsToDouble(readLong());
}
