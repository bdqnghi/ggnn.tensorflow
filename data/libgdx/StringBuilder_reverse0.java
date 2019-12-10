final void reverse0() {
    if (length < 2) {
        return;
    }
    int end = length - 1;
    char frontHigh = chars[0];
    char endLow = chars[end];
    boolean allowFrontSur = true, allowEndSur = true;
    for (int i = 0, mid = length / 2; i < mid; i++, --end) {
        char frontLow = chars[i + 1];
        char endHigh = chars[end - 1];
        boolean surAtFront = allowFrontSur && frontLow >= 0xdc00 && frontLow <= 0xdfff && frontHigh >= 0xd800 && frontHigh <= 0xdbff;
        if (surAtFront && length < 3) {
            return;
        }
        boolean surAtEnd = allowEndSur && endHigh >= 0xd800 && endHigh <= 0xdbff && endLow >= 0xdc00 && endLow <= 0xdfff;
        allowFrontSur = allowEndSur = true;
        if (surAtFront == surAtEnd) {
            if (surAtFront) {
                // both surrogates
                chars[end] = frontLow;
                chars[end - 1] = frontHigh;
                chars[i] = endHigh;
                chars[i + 1] = endLow;
                frontHigh = chars[i + 2];
                endLow = chars[end - 2];
                i++;
                end--;
            } else {
                // neither surrogates
                chars[end] = frontHigh;
                chars[i] = endLow;
                frontHigh = frontLow;
                endLow = endHigh;
            }
        } else {
            if (surAtFront) {
                // surrogate only at the front
                chars[end] = frontLow;
                chars[i] = endLow;
                endLow = endHigh;
                allowFrontSur = false;
            } else {
                // surrogate only at the end
                chars[end] = frontHigh;
                chars[i] = endHigh;
                frontHigh = frontLow;
                allowEndSur = false;
            }
        }
    }
    if ((length & 1) == 1 && (!allowFrontSur || !allowEndSur)) {
        chars[end] = allowFrontSur ? endLow : frontHigh;
    }
}
