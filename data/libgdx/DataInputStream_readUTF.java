public String readUTF() throws IOException {
    int bytes = readUnsignedShort();
    StringBuilder sb = new StringBuilder();
    while (bytes > 0) {
        bytes -= readUtfChar(sb);
    }
    return sb.toString();
}
