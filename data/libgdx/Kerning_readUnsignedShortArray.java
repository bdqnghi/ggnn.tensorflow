public int[] readUnsignedShortArray(int count) throws IOException {
    int[] shorts = new int[count];
    for (int i = 0; i < count; i++) {
        shorts[i] = readUnsignedShort();
    }
    return shorts;
}
