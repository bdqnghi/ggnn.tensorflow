void updateDisplayText() {
    BitmapFont font = style.font;
    BitmapFontData data = font.getData();
    String text = this.text;
    int textLength = text.length();
    StringBuilder buffer = new StringBuilder();
    for (int i = 0; i < textLength; i++) {
        char c = text.charAt(i);
        buffer.append(data.hasGlyph(c) ? c : ' ');
    }
    String newDisplayText = buffer.toString();
    if (passwordMode && data.hasGlyph(passwordCharacter)) {
        if (passwordBuffer == null)
            passwordBuffer = new StringBuilder(newDisplayText.length());
        if (passwordBuffer.length() > textLength)
            passwordBuffer.setLength(textLength);
        else {
            for (int i = passwordBuffer.length(); i < textLength; i++) passwordBuffer.append(passwordCharacter);
        }
        displayText = passwordBuffer;
    } else
        displayText = newDisplayText;
    layout.setText(font, displayText);
    glyphPositions.clear();
    float x = 0;
    if (layout.runs.size > 0) {
        GlyphRun run = layout.runs.first();
        FloatArray xAdvances = run.xAdvances;
        fontOffset = xAdvances.first();
        for (int i = 1, n = xAdvances.size; i < n; i++) {
            glyphPositions.add(x);
            x += xAdvances.get(i);
        }
    } else
        fontOffset = 0;
    glyphPositions.add(x);
    if (selectionStart > newDisplayText.length())
        selectionStart = textLength;
}
