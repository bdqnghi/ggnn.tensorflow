void paste(String content, boolean fireChangeEvent) {
    if (content == null)
        return;
    StringBuilder buffer = new StringBuilder();
    int textLength = text.length();
    if (hasSelection)
        textLength -= Math.abs(cursor - selectionStart);
    BitmapFontData data = style.font.getData();
    for (int i = 0, n = content.length(); i < n; i++) {
        if (!withinMaxLength(textLength + buffer.length()))
            break;
        char c = content.charAt(i);
        if (!(writeEnters && (c == ENTER_ANDROID || c == ENTER_DESKTOP))) {
            if (onlyFontChars && !data.hasGlyph(c))
                continue;
            if (filter != null && !filter.acceptChar(this, c))
                continue;
        }
        buffer.append(c);
    }
    content = buffer.toString();
    if (hasSelection)
        cursor = delete(fireChangeEvent);
    if (fireChangeEvent)
        changeText(text, insert(cursor, content, text));
    else
        text = insert(cursor, content, text);
    updateDisplayText();
    cursor += content.length();
}
