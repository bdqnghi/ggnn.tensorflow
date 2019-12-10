protected void moveCursor(boolean forward, boolean jump) {
    int limit = forward ? text.length() : 0;
    int charOffset = forward ? 0 : -1;
    while ((forward ? ++cursor < limit : --cursor > limit) && jump) {
        if (!continueCursor(cursor, charOffset))
            break;
    }
}
