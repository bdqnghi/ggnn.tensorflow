public boolean isBreakChar(char c) {
    if (breakChars == null)
        return false;
    for (char br : breakChars) if (c == br)
        return true;
    return false;
}
