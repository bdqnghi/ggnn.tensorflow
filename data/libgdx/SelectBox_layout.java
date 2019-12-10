@Override
public void layout() {
    Drawable bg = style.background;
    BitmapFont font = style.font;
    if (bg != null) {
        prefHeight = Math.max(bg.getTopHeight() + bg.getBottomHeight() + font.getCapHeight() - font.getDescent() * 2, bg.getMinHeight());
    } else
        prefHeight = font.getCapHeight() - font.getDescent() * 2;
    float maxItemWidth = 0;
    Pool<GlyphLayout> layoutPool = Pools.get(GlyphLayout.class);
    GlyphLayout layout = layoutPool.obtain();
    for (int i = 0; i < items.size; i++) {
        layout.setText(font, toString(items.get(i)));
        maxItemWidth = Math.max(layout.width, maxItemWidth);
    }
    layoutPool.free(layout);
    prefWidth = maxItemWidth;
    if (bg != null)
        prefWidth += bg.getLeftWidth() + bg.getRightWidth();
    ListStyle listStyle = style.listStyle;
    ScrollPaneStyle scrollStyle = style.scrollStyle;
    prefWidth = Math.max(prefWidth, maxItemWidth + (scrollStyle.background == null ? 0 : scrollStyle.background.getLeftWidth() + scrollStyle.background.getRightWidth()) + listStyle.selection.getLeftWidth() + listStyle.selection.getRightWidth() + Math.max(style.scrollStyle.vScroll != null ? style.scrollStyle.vScroll.getMinWidth() : 0, style.scrollStyle.vScrollKnob != null ? style.scrollStyle.vScrollKnob.getMinWidth() : 0));
}
