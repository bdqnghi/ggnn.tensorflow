/**
 * Returns the distance from one line of text to the next. This is the sum of the descent, ascent, leading, padding top,
 * padding bottom, and padding advance y. To change the line height, use {@link #setPaddingAdvanceY(int)}.
 */
public int getLineHeight() {
    return descent + ascent + leading + paddingTop + paddingBottom + paddingAdvanceY;
}
