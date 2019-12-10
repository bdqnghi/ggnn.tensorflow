/**
 * Searches for the index of the specified character. The search for the character starts at the specified offset and moves
 * towards the beginning.
 *
 * @param subString the string to find.
 * @param start the starting offset.
 * @return the index of the specified character, -1 if the character isn't found.
 * @throws NullPointerException if {@code subString} is {@code null}.
 * @see String#lastIndexOf(String,int)
 * @since 1.4
 */
public int lastIndexOf(String subString, int start) {
    int subCount = subString.length();
    if (subCount <= length && start >= 0) {
        if (subCount > 0) {
            if (start > length - subCount) {
                // count and subCount are both
                start = length - subCount;
            }
            // >= 1
            char firstChar = subString.charAt(0);
            while (true) {
                int i = start;
                boolean found = false;
                for (; i >= 0; --i) {
                    if (chars[i] == firstChar) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return -1;
                }
                int o1 = i, o2 = 0;
                while (++o2 < subCount && chars[++o1] == subString.charAt(o2)) {
                // Intentionally empty
                }
                if (o2 == subCount) {
                    return i;
                }
                start = i - 1;
            }
        }
        return start < length ? start : length;
    }
    return -1;
}
