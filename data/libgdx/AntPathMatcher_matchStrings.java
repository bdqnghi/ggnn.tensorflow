/**
 * Tests whether or not a string matches against a pattern. The pattern may contain two special characters:<br>
 * '*' means zero or more characters<br>
 * '?' means one and only one character
 *
 * @param pattern pattern to match against. Must not be <code>null</code>.
 * @param str string which must be matched against the pattern. Must not be <code>null</code>.
 * @return <code>true</code> if the string matches against the pattern, or <code>false</code> otherwise.
 */
private boolean matchStrings(String pattern, String str) {
    char[] patArr = pattern.toCharArray();
    char[] strArr = str.toCharArray();
    int patIdxStart = 0;
    int patIdxEnd = patArr.length - 1;
    int strIdxStart = 0;
    int strIdxEnd = strArr.length - 1;
    char ch;
    boolean containsStar = false;
    for (int i = 0; i < patArr.length; i++) {
        if (patArr[i] == '*') {
            containsStar = true;
            break;
        }
    }
    if (!containsStar) {
        // No '*'s, so we make a shortcut
        if (patIdxEnd != strIdxEnd) {
            // Pattern and string do not have the same size
            return false;
        }
        for (int i = 0; i <= patIdxEnd; i++) {
            ch = patArr[i];
            if (ch != '?') {
                if (ch != strArr[i]) {
                    // Character mismatch
                    return false;
                }
            }
        }
        // String matches against pattern
        return true;
    }
    if (patIdxEnd == 0) {
        // Pattern contains only '*', which matches anything
        return true;
    }
    // Process characters before first star
    while ((ch = patArr[patIdxStart]) != '*' && strIdxStart <= strIdxEnd) {
        if (ch != '?') {
            if (ch != strArr[strIdxStart]) {
                // Character mismatch
                return false;
            }
        }
        patIdxStart++;
        strIdxStart++;
    }
    if (strIdxStart > strIdxEnd) {
        // left in the pattern. If so, we succeeded. Otherwise failure.
        for (int i = patIdxStart; i <= patIdxEnd; i++) {
            if (patArr[i] != '*') {
                return false;
            }
        }
        return true;
    }
    // Process characters after last star
    while ((ch = patArr[patIdxEnd]) != '*' && strIdxStart <= strIdxEnd) {
        if (ch != '?') {
            if (ch != strArr[strIdxEnd]) {
                // Character mismatch
                return false;
            }
        }
        patIdxEnd--;
        strIdxEnd--;
    }
    if (strIdxStart > strIdxEnd) {
        // left in the pattern. If so, we succeeded. Otherwise failure.
        for (int i = patIdxStart; i <= patIdxEnd; i++) {
            if (patArr[i] != '*') {
                return false;
            }
        }
        return true;
    }
    // always to a '*'.
    while (patIdxStart != patIdxEnd && strIdxStart <= strIdxEnd) {
        int patIdxTmp = -1;
        for (int i = patIdxStart + 1; i <= patIdxEnd; i++) {
            if (patArr[i] == '*') {
                patIdxTmp = i;
                break;
            }
        }
        if (patIdxTmp == patIdxStart + 1) {
            // Two stars next to each other, skip the first one.
            patIdxStart++;
            continue;
        }
        // Find the pattern between padIdxStart & padIdxTmp in str between
        // strIdxStart & strIdxEnd
        int patLength = (patIdxTmp - patIdxStart - 1);
        int strLength = (strIdxEnd - strIdxStart + 1);
        int foundIdx = -1;
        strLoop: for (int i = 0; i <= strLength - patLength; i++) {
            for (int j = 0; j < patLength; j++) {
                ch = patArr[patIdxStart + j + 1];
                if (ch != '?') {
                    if (ch != strArr[strIdxStart + i + j]) {
                        continue strLoop;
                    }
                }
            }
            foundIdx = strIdxStart + i;
            break;
        }
        if (foundIdx == -1) {
            return false;
        }
        patIdxStart = patIdxTmp;
        strIdxStart = foundIdx + patLength;
    }
    // in the pattern. If so, we succeeded. Otherwise failure.
    for (int i = patIdxStart; i <= patIdxEnd; i++) {
        if (patArr[i] != '*') {
            return false;
        }
    }
    return true;
}
