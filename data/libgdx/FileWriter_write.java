public void write(String s) throws IOException {
    for (int i = 0; i < s.length(); i++) {
        file.write(s.charAt(i));
    }
}
