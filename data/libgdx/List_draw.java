@Override
public void draw(Batch batch, float parentAlpha) {
    validate();
    BitmapFont font = style.font;
    Drawable selectedDrawable = style.selection;
    Color fontColorSelected = style.fontColorSelected;
    Color fontColorUnselected = style.fontColorUnselected;
    Color color = getColor();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    float x = getX(), y = getY(), width = getWidth(), height = getHeight();
    float itemY = height;
    Drawable background = style.background;
    if (background != null) {
        background.draw(batch, x, y, width, height);
        float leftWidth = background.getLeftWidth();
        x += leftWidth;
        itemY -= background.getTopHeight();
        width -= leftWidth + background.getRightWidth();
    }
    font.setColor(fontColorUnselected.r, fontColorUnselected.g, fontColorUnselected.b, fontColorUnselected.a * parentAlpha);
    for (int i = 0; i < items.size; i++) {
        if (cullingArea == null || (itemY - itemHeight <= cullingArea.y + cullingArea.height && itemY >= cullingArea.y)) {
            T item = items.get(i);
            boolean selected = selection.contains(item);
            if (selected) {
                selectedDrawable.draw(batch, x, y + itemY - itemHeight, width, itemHeight);
                font.setColor(fontColorSelected.r, fontColorSelected.g, fontColorSelected.b, fontColorSelected.a * parentAlpha);
            }
            font.draw(batch, toString(item), x + textOffsetX, y + itemY - textOffsetY);
            if (selected) {
                font.setColor(fontColorUnselected.r, fontColorUnselected.g, fontColorUnselected.b, fontColorUnselected.a * parentAlpha);
            }
        } else if (itemY < cullingArea.y) {
            break;
        }
        itemY -= itemHeight;
    }
}
