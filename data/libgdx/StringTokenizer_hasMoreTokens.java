public boolean hasMoreTokens() {
    if (next != null) {
        return true;
    }
    // skip leading delimiters
    while (pos < len && deli.indexOf(s.charAt(pos)) != -1) {
        pos++;
    }
    if (pos >= len) {
        return false;
    }
    int p0 = pos++;
    while (pos < len && deli.indexOf(s.charAt(pos)) == -1) {
        pos++;
    }
    next = s.substring(p0, pos++);
    return true;
}
