protected void drawBackground(Batch batch, float parentAlpha, float x, float y) {
    super.drawBackground(batch, parentAlpha, x, y);
    // Manually draw the title table before clipping is done.
    titleTable.getColor().a = getColor().a;
    float padTop = getPadTop(), padLeft = getPadLeft();
    titleTable.setSize(getWidth() - padLeft - getPadRight(), padTop);
    titleTable.setPosition(padLeft, getHeight() - padTop);
    drawTitleTable = true;
    titleTable.draw(batch, parentAlpha);
    // Avoid drawing the title table again in drawChildren.
    drawTitleTable = false;
}
