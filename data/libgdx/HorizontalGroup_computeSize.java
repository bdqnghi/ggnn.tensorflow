private void computeSize() {
    sizeInvalid = false;
    SnapshotArray<Actor> children = getChildren();
    int n = children.size;
    prefWidth = padLeft + padRight + spacing * (n - 1);
    prefHeight = 0;
    for (int i = 0; i < n; i++) {
        Actor child = children.get(i);
        if (child instanceof Layout) {
            Layout layout = (Layout) child;
            prefWidth += layout.getPrefWidth();
            prefHeight = Math.max(prefHeight, layout.getPrefHeight());
        } else {
            prefWidth += child.getWidth();
            prefHeight = Math.max(prefHeight, child.getHeight());
        }
    }
    prefHeight += padTop + padBottom;
    if (round) {
        prefWidth = Math.round(prefWidth);
        prefHeight = Math.round(prefHeight);
    }
}
