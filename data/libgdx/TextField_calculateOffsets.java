protected void calculateOffsets() {
    float visibleWidth = getWidth();
    if (style.background != null)
        visibleWidth -= style.background.getLeftWidth() + style.background.getRightWidth();
    // Check if the cursor has gone out the left or right side of the visible area and adjust renderoffset.
    float position = glyphPositions.get(cursor);
    float distance = position - Math.abs(renderOffset);
    if (distance <= 0) {
        if (cursor > 0)
            renderOffset = -glyphPositions.get(cursor - 1);
        else
            renderOffset = 0;
    } else if (distance > visibleWidth) {
        renderOffset -= distance - visibleWidth;
    }
    // calculate first visible char based on render offset
    visibleTextStart = 0;
    textOffset = 0;
    float start = Math.abs(renderOffset);
    int glyphCount = glyphPositions.size;
    float[] glyphPositions = this.glyphPositions.items;
    float startPos = 0;
    for (int i = 0; i < glyphCount; i++) {
        if (glyphPositions[i] >= start) {
            visibleTextStart = i;
            startPos = glyphPositions[i];
            textOffset = startPos - start;
            break;
        }
    }
    // calculate last visible char based on visible width and render offset
    visibleTextEnd = Math.min(displayText.length(), cursor + 1);
    for (; visibleTextEnd <= displayText.length(); visibleTextEnd++) {
        if (glyphPositions[visibleTextEnd] - startPos > visibleWidth)
            break;
    }
    visibleTextEnd = Math.max(0, visibleTextEnd - 1);
    // calculate selection x position and width
    if (hasSelection) {
        int minIndex = Math.min(cursor, selectionStart);
        int maxIndex = Math.max(cursor, selectionStart);
        float minX = Math.max(glyphPositions[minIndex], startPos);
        float maxX = Math.min(glyphPositions[maxIndex], glyphPositions[visibleTextEnd]);
        selectionX = minX;
        selectionWidth = maxX - minX - style.font.getData().cursorX;
    }
    if ((textHAlign & Align.left) == 0) {
        textOffset = visibleWidth - (glyphPositions[visibleTextEnd] - startPos);
        if ((textHAlign & Align.center) != 0)
            textOffset = Math.round(textOffset * 0.5f);
        if (hasSelection)
            selectionX += textOffset;
    }
}
