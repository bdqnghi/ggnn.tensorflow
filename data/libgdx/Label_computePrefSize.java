private void computePrefSize() {
    prefSizeInvalid = false;
    GlyphLayout prefSizeLayout = Label.prefSizeLayout;
    if (wrap && ellipsis == null) {
        float width = getWidth();
        if (style.background != null)
            width -= style.background.getLeftWidth() + style.background.getRightWidth();
        prefSizeLayout.setText(cache.getFont(), text, Color.WHITE, width, Align.left, true);
    } else
        prefSizeLayout.setText(cache.getFont(), text);
    prefSize.set(prefSizeLayout.width, prefSizeLayout.height);
}
