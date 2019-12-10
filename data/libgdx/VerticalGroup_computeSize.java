private void computeSize() {
    sizeInvalid = false;
    SnapshotArray<Actor> children = getChildren();
    int n = children.size;
    prefWidth = 0;
    prefHeight = padTop + padBottom + spacing * (n - 1);
    for (int i = 0; i < n; i++) {
        Actor child = children.get(i);
        if (child instanceof Layout) {
            Layout layout = (Layout) child;
            prefWidth = Math.max(prefWidth, layout.getPrefWidth());
            prefHeight += layout.getPrefHeight();
        } else {
            prefWidth = Math.max(prefWidth, child.getWidth());
            prefHeight += child.getHeight();
        }
    }
    prefWidth += padLeft + padRight;
    if (round) {
        prefWidth = Math.round(prefWidth);
        prefHeight = Math.round(prefHeight);
    }
}
