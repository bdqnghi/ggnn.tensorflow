@Override
protected void calculateOffsets() {
    super.calculateOffsets();
    if (!this.text.equals(lastText)) {
        this.lastText = text;
        BitmapFont font = style.font;
        float maxWidthLine = this.getWidth() - (style.background != null ? style.background.getLeftWidth() + style.background.getRightWidth() : 0);
        linesBreak.clear();
        int lineStart = 0;
        int lastSpace = 0;
        char lastCharacter;
        Pool<GlyphLayout> layoutPool = Pools.get(GlyphLayout.class);
        GlyphLayout layout = layoutPool.obtain();
        for (int i = 0; i < text.length(); i++) {
            lastCharacter = text.charAt(i);
            if (lastCharacter == ENTER_DESKTOP || lastCharacter == ENTER_ANDROID) {
                linesBreak.add(lineStart);
                linesBreak.add(i);
                lineStart = i + 1;
            } else {
                lastSpace = (continueCursor(i, 0) ? lastSpace : i);
                layout.setText(font, text.subSequence(lineStart, i + 1));
                if (layout.width > maxWidthLine) {
                    if (lineStart >= lastSpace) {
                        lastSpace = i - 1;
                    }
                    linesBreak.add(lineStart);
                    linesBreak.add(lastSpace + 1);
                    lineStart = lastSpace + 1;
                    lastSpace = lineStart;
                }
            }
        }
        layoutPool.free(layout);
        // Add last line
        if (lineStart < text.length()) {
            linesBreak.add(lineStart);
            linesBreak.add(text.length());
        }
        showCursor();
    }
}
