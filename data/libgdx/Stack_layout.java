public void layout() {
    if (sizeInvalid)
        computeSize();
    float width = getWidth(), height = getHeight();
    Array<Actor> children = getChildren();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = children.get(i);
        child.setBounds(0, 0, width, height);
        if (child instanceof Layout)
            ((Layout) child).validate();
    }
}
