public void draw(Batch batch, float x, float y, float width, float height) {
    final float centerColumnX = x + leftWidth;
    final float rightColumnX = x + width - rightWidth;
    final float middleRowY = y + bottomHeight;
    final float topRowY = y + height - topHeight;
    final float c = tmpDrawColor.set(color).mul(batch.getColor()).toFloatBits();
    if (bottomLeft != -1)
        set(bottomLeft, x, y, centerColumnX - x, middleRowY - y, c);
    if (bottomCenter != -1)
        set(bottomCenter, centerColumnX, y, rightColumnX - centerColumnX, middleRowY - y, c);
    if (bottomRight != -1)
        set(bottomRight, rightColumnX, y, x + width - rightColumnX, middleRowY - y, c);
    if (middleLeft != -1)
        set(middleLeft, x, middleRowY, centerColumnX - x, topRowY - middleRowY, c);
    if (middleCenter != -1)
        set(middleCenter, centerColumnX, middleRowY, rightColumnX - centerColumnX, topRowY - middleRowY, c);
    if (middleRight != -1)
        set(middleRight, rightColumnX, middleRowY, x + width - rightColumnX, topRowY - middleRowY, c);
    if (topLeft != -1)
        set(topLeft, x, topRowY, centerColumnX - x, y + height - topRowY, c);
    if (topCenter != -1)
        set(topCenter, centerColumnX, topRowY, rightColumnX - centerColumnX, y + height - topRowY, c);
    if (topRight != -1)
        set(topRight, rightColumnX, topRowY, x + width - rightColumnX, y + height - topRowY, c);
    batch.draw(texture, vertices, 0, idx);
}
