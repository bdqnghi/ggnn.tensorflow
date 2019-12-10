private void decode(byte b) {
    if (b > 0 && state == UTF8_ACCEPT) {
        charBuffer[charOffset++] = (char) (b & 0xFF);
    } else {
        int i = b & 0xFF;
        int type = BYTE_TABLE[i];
        codePoint = state == UTF8_ACCEPT ? (0xFF >> type) & i : (i & 0x3F) | (codePoint << 6);
        int next = TRANSITION_TABLE[state + type];
        switch(next) {
            case UTF8_ACCEPT:
                state = next;
                if (codePoint < Character.MIN_HIGH_SURROGATE) {
                    charBuffer[charOffset++] = (char) codePoint;
                } else {
                    // The code below is equivalent to
                    // for (char c : Character.toChars(codePoint)) charBuffer[charOffset++] = c;
                    // but does not allocate a char array.
                    int codePointLength = Character.toChars(codePoint, utf16Char, 0);
                    charBuffer[charOffset++] = utf16Char[0];
                    if (codePointLength == 2)
                        charBuffer[charOffset++] = utf16Char[1];
                }
                break;
            case UTF8_REJECT:
                codePoint = 0;
                state = UTF8_ACCEPT;
                charBuffer[charOffset++] = REPLACEMENT;
                break;
            default:
                state = next;
                break;
        }
    }
}
