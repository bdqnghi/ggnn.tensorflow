public void layout() {
    float spacing = this.spacing, padLeft = this.padLeft;
    int align = this.align;
    boolean reverse = this.reverse, round = this.round;
    float groupWidth = getWidth() - padLeft - padRight;
    float y = reverse ? padBottom : getHeight() - padTop + spacing;
    SnapshotArray<Actor> children = getChildren();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = children.get(i);
        float width, height;
        Layout layout = null;
        if (child instanceof Layout) {
            layout = (Layout) child;
            if (fill > 0)
                width = groupWidth * fill;
            else
                width = Math.min(layout.getPrefWidth(), groupWidth);
            width = Math.max(width, layout.getMinWidth());
            float maxWidth = layout.getMaxWidth();
            if (maxWidth > 0 && width > maxWidth)
                width = maxWidth;
            height = layout.getPrefHeight();
        } else {
            width = child.getWidth();
            height = child.getHeight();
            if (fill > 0)
                width *= fill;
        }
        float x = padLeft;
        if ((align & Align.right) != 0)
            x += groupWidth - width;
        else if (// center
        (align & Align.left) == 0)
            x += (groupWidth - width) / 2;
        if (!reverse)
            y -= (height + spacing);
        if (round)
            child.setBounds(Math.round(x), Math.round(y), Math.round(width), Math.round(height));
        else
            child.setBounds(x, y, width, height);
        if (reverse)
            y += (height + spacing);
        if (layout != null)
            layout.validate();
    }
}
