@Override
public int read() throws IOException {
    if (pos >= len) {
        return -1;
    } else {
        consolidate();
        return data.charAt(pos++);
    // int p2 = (pos << 1);
    // int result = Character.digit(data.charAt(p2), 16) * 16 +
    // Character.digit(data.charAt(p2 + 1), 16);
    // pos++;
    // return result;
    }
}
