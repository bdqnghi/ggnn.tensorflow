private void readTableDirectory() throws IOException {
    input.skip(4);
    int tableCount = input.readUnsignedShort();
    input.skip(6);
    byte[] tagBytes = new byte[4];
    for (int i = 0; i < tableCount; i++) {
        tagBytes[0] = input.readByte();
        tagBytes[1] = input.readByte();
        tagBytes[2] = input.readByte();
        tagBytes[3] = input.readByte();
        input.skip(4);
        int offset = (int) input.readUnsignedLong();
        input.skip(4);
        String tag = new String(tagBytes, "ISO-8859-1");
        if (tag.equals("head")) {
            headOffset = offset;
        } else if (tag.equals("kern")) {
            kernOffset = offset;
        } else if (tag.equals("GPOS")) {
            gposOffset = offset;
        }
    }
}
