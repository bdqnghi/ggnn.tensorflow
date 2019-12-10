public void layout() {
    final BitmapFont font = style.font;
    final Drawable selectedDrawable = style.selection;
    itemHeight = font.getCapHeight() - font.getDescent() * 2;
    itemHeight += selectedDrawable.getTopHeight() + selectedDrawable.getBottomHeight();
    textOffsetX = selectedDrawable.getLeftWidth();
    textOffsetY = selectedDrawable.getTopHeight() - font.getDescent();
    prefWidth = 0;
    Pool<GlyphLayout> layoutPool = Pools.get(GlyphLayout.class);
    GlyphLayout layout = layoutPool.obtain();
    for (int i = 0; i < items.size; i++) {
        layout.setText(font, toString(items.get(i)));
        prefWidth = Math.max(layout.width, prefWidth);
    }
    layoutPool.free(layout);
    prefWidth += selectedDrawable.getLeftWidth() + selectedDrawable.getRightWidth();
    prefHeight = items.size * itemHeight;
    Drawable background = style.background;
    if (background != null) {
        prefWidth += background.getLeftWidth() + background.getRightWidth();
        prefHeight += background.getTopHeight() + background.getBottomHeight();
    }
}
