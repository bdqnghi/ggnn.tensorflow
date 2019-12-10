private int parseColorMarkup(CharSequence str, int start, int end, Pool<Color> colorPool) {
    // String ended with "[".
    if (start == end)
        return -1;
    switch(str.charAt(start)) {
        case '#':
            // Parse hex color RRGGBBAA where AA is optional and defaults to 0xFF if less than 6 chars are used.
            int colorInt = 0;
            for (int i = start + 1; i < end; i++) {
                char ch = str.charAt(i);
                if (ch == ']') {
                    // Illegal number of hex digits.
                    if (i < start + 2 || i > start + 9)
                        break;
                    if (i - start <= 7) {
                        // RRGGBB or fewer chars.
                        for (int ii = 0, nn = 9 - (i - start); ii < nn; ii++) colorInt = colorInt << 4;
                        colorInt |= 0xff;
                    }
                    Color color = colorPool.obtain();
                    colorStack.add(color);
                    Color.rgba8888ToColor(color, colorInt);
                    return i - start;
                }
                if (ch >= '0' && ch <= '9')
                    colorInt = colorInt * 16 + (ch - '0');
                else if (ch >= 'a' && ch <= 'f')
                    colorInt = colorInt * 16 + (ch - ('a' - 10));
                else if (ch >= 'A' && ch <= 'F')
                    colorInt = colorInt * 16 + (ch - ('A' - 10));
                else
                    // Unexpected character in hex color.
                    break;
            }
            return -1;
        case // "[[" is an escaped left square bracket.
        '[':
            return -1;
        case // "[]" is a "pop" color tag.
        ']':
            if (colorStack.size > 1)
                colorPool.free(colorStack.pop());
            return 0;
    }
    // Parse named color.
    int colorStart = start;
    for (int i = start + 1; i < end; i++) {
        char ch = str.charAt(i);
        if (ch != ']')
            continue;
        Color namedColor = Colors.get(str.subSequence(colorStart, i).toString());
        // Unknown color name.
        if (namedColor == null)
            return -1;
        Color color = colorPool.obtain();
        colorStack.add(color);
        color.set(namedColor);
        return i - start;
    }
    // Unclosed color tag.
    return -1;
}
