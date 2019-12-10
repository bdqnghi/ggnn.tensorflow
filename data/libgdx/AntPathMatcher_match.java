public boolean match(String pattern, String str) {
    if (str.startsWith("/") != pattern.startsWith("/")) {
        return false;
    }
    String[] patDirs = tokenizeToStringArray(pattern, "/", true, true);
    String[] strDirs = tokenizeToStringArray(str, "/", true, true);
    int patIdxStart = 0;
    int patIdxEnd = patDirs.length - 1;
    int strIdxStart = 0;
    int strIdxEnd = strDirs.length - 1;
    // Match all elements up to the first **
    while (patIdxStart <= patIdxEnd && strIdxStart <= strIdxEnd) {
        String patDir = (String) patDirs[patIdxStart];
        if (patDir.equals("**")) {
            break;
        }
        if (!matchStrings(patDir, (String) strDirs[strIdxStart])) {
            return false;
        }
        patIdxStart++;
        strIdxStart++;
    }
    if (strIdxStart > strIdxEnd) {
        // String is exhausted, only match if rest of pattern is **'s
        for (int i = patIdxStart; i <= patIdxEnd; i++) {
            if (!patDirs[i].equals("**")) {
                return false;
            }
        }
        return true;
    } else {
        if (patIdxStart > patIdxEnd) {
            // String not exhausted, but pattern is. Failure.
            return false;
        }
    }
    // up to last '**'
    while (patIdxStart <= patIdxEnd && strIdxStart <= strIdxEnd) {
        String patDir = (String) patDirs[patIdxEnd];
        if (patDir.equals("**")) {
            break;
        }
        if (!matchStrings(patDir, (String) strDirs[strIdxEnd])) {
            return false;
        }
        patIdxEnd--;
        strIdxEnd--;
    }
    if (strIdxStart > strIdxEnd) {
        // String is exhausted
        for (int i = patIdxStart; i <= patIdxEnd; i++) {
            if (!patDirs[i].equals("**")) {
                return false;
            }
        }
        return true;
    }
    while (patIdxStart != patIdxEnd && strIdxStart <= strIdxEnd) {
        int patIdxTmp = -1;
        for (int i = patIdxStart + 1; i <= patIdxEnd; i++) {
            if (patDirs[i].equals("**")) {
                patIdxTmp = i;
                break;
            }
        }
        if (patIdxTmp == patIdxStart + 1) {
            // '**/**' situation, so skip one
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
                String subPat = (String) patDirs[patIdxStart + j + 1];
                String subStr = (String) strDirs[strIdxStart + i + j];
                if (!matchStrings(subPat, subStr)) {
                    continue strLoop;
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
    for (int i = patIdxStart; i <= patIdxEnd; i++) {
        if (!patDirs[i].equals("**")) {
            return false;
        }
    }
    return true;
}
