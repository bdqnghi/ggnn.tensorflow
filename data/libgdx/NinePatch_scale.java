/**
 * Multiplies the top/left/bottom/right sizes and padding by the specified amount.
 */
public void scale(float scaleX, float scaleY) {
    leftWidth *= scaleX;
    rightWidth *= scaleX;
    topHeight *= scaleY;
    bottomHeight *= scaleY;
    middleWidth *= scaleX;
    middleHeight *= scaleY;
    if (padLeft != -1)
        padLeft *= scaleX;
    if (padRight != -1)
        padRight *= scaleX;
    if (padTop != -1)
        padTop *= scaleY;
    if (padBottom != -1)
        padBottom *= scaleY;
}
