/**
 * Searches for the index of the specified character. The search for the character starts at the specified offset and moves
 * towards the end.
 *
 * @param subString the string to find.
 * @param start the starting offset.
 * @return the index of the specified character, -1 if the character isn't found
 * @see #lastIndexOf(String,int)
 * @since 1.4
 */
public int indexOf(String subString, int start) {
    if (start < 0) {
        start = 0;
    }
    int subCount = subString.length();
    if (subCount > 0) {
        if (subCount + start > length) {
            return -1;
        }
        char firstChar = subString.charAt(0);
        while (true) {
            int i = start;
            boolean found = false;
            for (; i < length; i++) {
                if (chars[i] == firstChar) {
                    found = true;
                    break;
                }
            }
            if (!found || subCount + i > length) {
                // handles subCount > count || start >= count
                return -1;
            }
            int o1 = i, o2 = 0;
            while (++o2 < subCount && chars[++o1] == subString.charAt(o2)) {
            // Intentionally empty
            }
            if (o2 == subCount) {
                return i;
            }
            start = i + 1;
        }
    }
    return start < length || start == 0 ? start : length;
}
