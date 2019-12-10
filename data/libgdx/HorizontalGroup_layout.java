public void layout() {
    float spacing = this.spacing, padBottom = this.padBottom;
    int align = this.align;
    boolean reverse = this.reverse, round = this.round;
    float groupHeight = getHeight() - padTop - padBottom;
    float x = !reverse ? padLeft : getWidth() - padRight + spacing;
    SnapshotArray<Actor> children = getChildren();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = children.get(i);
        float width, height;
        Layout layout = null;
        if (child instanceof Layout) {
            layout = (Layout) child;
            if (fill > 0)
                height = groupHeight * fill;
            else
                height = Math.min(layout.getPrefHeight(), groupHeight);
            height = Math.max(height, layout.getMinHeight());
            float maxHeight = layout.getMaxHeight();
            if (maxHeight > 0 && height > maxHeight)
                height = maxHeight;
            width = layout.getPrefWidth();
        } else {
            width = child.getWidth();
            height = child.getHeight();
            if (fill > 0)
                height *= fill;
        }
        float y = padBottom;
        if ((align & Align.top) != 0)
            y += groupHeight - height;
        else if (// center
        (align & Align.bottom) == 0)
            y += (groupHeight - height) / 2;
        if (reverse)
            x -= (width + spacing);
        if (round)
            child.setBounds(Math.round(x), Math.round(y), Math.round(width), Math.round(height));
        else
            child.setBounds(x, y, width, height);
        if (!reverse)
            x += (width + spacing);
        if (layout != null)
            layout.validate();
    }
}
