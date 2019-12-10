private void readHEAD(int fontSize) throws IOException {
    input.seek(headOffset + 2 * 4 + 2 * 4 + 2);
    int unitsPerEm = input.readUnsignedShort();
    scale = (float) fontSize / unitsPerEm;
}
