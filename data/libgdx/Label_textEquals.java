public boolean textEquals(CharSequence other) {
    int length = text.length;
    char[] chars = text.chars;
    if (length != other.length())
        return false;
    for (int i = 0; i < length; i++) if (chars[i] != other.charAt(i))
        return false;
    return true;
}
