@Override
public void write(char[] buf, int offset, int count) {
    for (int i = 0; i < count; i++) {
        char c = buf[offset + i];
        if (c == '\n') {
            flushBuilder();
        } else {
            mBuilder.append(c);
        }
    }
}
