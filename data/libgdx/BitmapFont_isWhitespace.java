public boolean isWhitespace(char c) {
    switch(c) {
        case '\n':
        case '\r':
        case '\t':
        case ' ':
            return true;
        default:
            return false;
    }
}
