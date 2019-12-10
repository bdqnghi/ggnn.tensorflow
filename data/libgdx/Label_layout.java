public void layout() {
    BitmapFont font = cache.getFont();
    float oldScaleX = font.getScaleX();
    float oldScaleY = font.getScaleY();
    if (fontScaleX != 1 || fontScaleY != 1)
        font.getData().setScale(fontScaleX, fontScaleY);
    boolean wrap = this.wrap && ellipsis == null;
    if (wrap) {
        float prefHeight = getPrefHeight();
        if (prefHeight != lastPrefHeight) {
            lastPrefHeight = prefHeight;
            invalidateHierarchy();
        }
    }
    float width = getWidth(), height = getHeight();
    Drawable background = style.background;
    float x = 0, y = 0;
    if (background != null) {
        x = background.getLeftWidth();
        y = background.getBottomHeight();
        width -= background.getLeftWidth() + background.getRightWidth();
        height -= background.getBottomHeight() + background.getTopHeight();
    }
    GlyphLayout layout = this.layout;
    float textWidth, textHeight;
    if (wrap || text.indexOf("\n") != -1) {
        // If the text can span multiple lines, determine the text's actual size so it can be aligned within the label.
        layout.setText(font, text, 0, text.length, Color.WHITE, width, lineAlign, wrap, ellipsis);
        textWidth = layout.width;
        textHeight = layout.height;
        if ((labelAlign & Align.left) == 0) {
            if ((labelAlign & Align.right) != 0)
                x += width - textWidth;
            else
                x += (width - textWidth) / 2;
        }
    } else {
        textWidth = width;
        textHeight = font.getData().capHeight;
    }
    if ((labelAlign & Align.top) != 0) {
        y += cache.getFont().isFlipped() ? 0 : height - textHeight;
        y += style.font.getDescent();
    } else if ((labelAlign & Align.bottom) != 0) {
        y += cache.getFont().isFlipped() ? height - textHeight : 0;
        y -= style.font.getDescent();
    } else {
        y += (height - textHeight) / 2;
    }
    if (!cache.getFont().isFlipped())
        y += textHeight;
    layout.setText(font, text, 0, text.length, Color.WHITE, textWidth, lineAlign, wrap, ellipsis);
    cache.setText(layout, x, y);
    if (fontScaleX != 1 || fontScaleY != 1)
        font.getData().setScale(oldScaleX, oldScaleY);
}
