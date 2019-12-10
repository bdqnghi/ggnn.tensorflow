final void appendNull() {
    int newSize = length + 4;
    if (newSize > chars.length) {
        enlargeBuffer(newSize);
    }
    chars[length++] = 'n';
    chars[length++] = 'u';
    chars[length++] = 'l';
    chars[length++] = 'l';
}
