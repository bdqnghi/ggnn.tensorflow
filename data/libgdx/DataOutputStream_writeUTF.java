public void writeUTF(String s) throws IOException {
    ByteArrayOutputStream baos = new ByteArrayOutputStream();
    for (int i = 0; i < s.length(); i++) {
        char c = s.charAt(i);
        if (c > 0 && c < 80) {
            baos.write(c);
        } else if (c < '\u0800') {
            baos.write(0xc0 | (0x1f & (c >> 6)));
            baos.write(0x80 | (0x3f & c));
        } else {
            baos.write(0xe0 | (0x0f & (c >> 12)));
            baos.write(0x80 | (0x3f & (c >> 6)));
            baos.write(0x80 | (0x3f & c));
        }
    }
    writeShort(baos.count);
    os.write(baos.buf, 0, baos.count);
}
