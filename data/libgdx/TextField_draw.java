@Override
public void draw(Batch batch, float parentAlpha) {
    Stage stage = getStage();
    boolean focused = stage != null && stage.getKeyboardFocus() == this;
    if (!focused)
        keyRepeatTask.cancel();
    final BitmapFont font = style.font;
    final Color fontColor = (disabled && style.disabledFontColor != null) ? style.disabledFontColor : ((focused && style.focusedFontColor != null) ? style.focusedFontColor : style.fontColor);
    final Drawable selection = style.selection;
    final Drawable cursorPatch = style.cursor;
    final Drawable background = (disabled && style.disabledBackground != null) ? style.disabledBackground : ((focused && style.focusedBackground != null) ? style.focusedBackground : style.background);
    Color color = getColor();
    float x = getX();
    float y = getY();
    float width = getWidth();
    float height = getHeight();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    float bgLeftWidth = 0, bgRightWidth = 0;
    if (background != null) {
        background.draw(batch, x, y, width, height);
        bgLeftWidth = background.getLeftWidth();
        bgRightWidth = background.getRightWidth();
    }
    float textY = getTextY(font, background);
    calculateOffsets();
    if (focused && hasSelection && selection != null) {
        drawSelection(selection, batch, font, x + bgLeftWidth, y + textY);
    }
    float yOffset = font.isFlipped() ? -textHeight : 0;
    if (displayText.length() == 0) {
        if (!focused && messageText != null) {
            if (style.messageFontColor != null) {
                font.setColor(style.messageFontColor.r, style.messageFontColor.g, style.messageFontColor.b, style.messageFontColor.a * color.a * parentAlpha);
            } else
                font.setColor(0.7f, 0.7f, 0.7f, color.a * parentAlpha);
            BitmapFont messageFont = style.messageFont != null ? style.messageFont : font;
            messageFont.draw(batch, messageText, x + bgLeftWidth, y + textY + yOffset, 0, messageText.length(), width - bgLeftWidth - bgRightWidth, textHAlign, false, "...");
        }
    } else {
        font.setColor(fontColor.r, fontColor.g, fontColor.b, fontColor.a * color.a * parentAlpha);
        drawText(batch, font, x + bgLeftWidth, y + textY + yOffset);
    }
    if (focused && !disabled) {
        blink();
        if (cursorOn && cursorPatch != null) {
            drawCursor(cursorPatch, batch, font, x + bgLeftWidth, y + textY);
        }
    }
}
