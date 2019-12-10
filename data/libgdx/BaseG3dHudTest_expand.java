public void expand() {
    if (!collapsed)
        return;
    setHeight(expandHeight);
    setY(getY() - expandHeight + collapseHeight);
    collapsed = false;
}
