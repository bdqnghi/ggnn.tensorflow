public float readFloat() throws IOException {
    return Numbers.intBitsToFloat(readInt());
}
