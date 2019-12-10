public void writeBytes(String s) throws IOException {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        os.write(s.charAt(i) & 0xff);
    }
}
