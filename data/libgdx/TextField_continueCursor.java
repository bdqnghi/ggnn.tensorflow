protected boolean continueCursor(int index, int offset) {
    char c = text.charAt(index + offset);
    return isWordCharacter(c);
}
