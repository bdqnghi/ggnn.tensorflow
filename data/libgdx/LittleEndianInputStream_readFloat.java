public float readFloat() throws IOException {
    return Float.intBitsToFloat(readInt());
}
