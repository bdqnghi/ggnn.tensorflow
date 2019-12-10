public void collapse() {
    if (collapsed)
        return;
    expandHeight = getHeight();
    setHeight(collapseHeight);
    setY(getY() + expandHeight - collapseHeight);
    collapsed = true;
    if (getStage() != null)
        getStage().setScrollFocus(null);
}
