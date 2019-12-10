private void computeSize() {
    sizeInvalid = false;
    prefWidth = 0;
    prefHeight = 0;
    minWidth = 0;
    minHeight = 0;
    maxWidth = 0;
    maxHeight = 0;
    SnapshotArray<Actor> children = getChildren();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = children.get(i);
        float childMaxWidth, childMaxHeight;
        if (child instanceof Layout) {
            Layout layout = (Layout) child;
            prefWidth = Math.max(prefWidth, layout.getPrefWidth());
            prefHeight = Math.max(prefHeight, layout.getPrefHeight());
            minWidth = Math.max(minWidth, layout.getMinWidth());
            minHeight = Math.max(minHeight, layout.getMinHeight());
            childMaxWidth = layout.getMaxWidth();
            childMaxHeight = layout.getMaxHeight();
        } else {
            prefWidth = Math.max(prefWidth, child.getWidth());
            prefHeight = Math.max(prefHeight, child.getHeight());
            minWidth = Math.max(minWidth, child.getWidth());
            minHeight = Math.max(minHeight, child.getHeight());
            childMaxWidth = 0;
            childMaxHeight = 0;
        }
        if (childMaxWidth > 0)
            maxWidth = maxWidth == 0 ? childMaxWidth : Math.min(maxWidth, childMaxWidth);
        if (childMaxHeight > 0)
            maxHeight = maxHeight == 0 ? childMaxHeight : Math.min(maxHeight, childMaxHeight);
    }
}
