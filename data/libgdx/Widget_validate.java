public void validate() {
    if (!layoutEnabled)
        return;
    Group parent = getParent();
    if (fillParent && parent != null) {
        float parentWidth, parentHeight;
        Stage stage = getStage();
        if (stage != null && parent == stage.getRoot()) {
            parentWidth = stage.getWidth();
            parentHeight = stage.getHeight();
        } else {
            parentWidth = parent.getWidth();
            parentHeight = parent.getHeight();
        }
        setSize(parentWidth, parentHeight);
    }
    if (!needsLayout)
        return;
    needsLayout = false;
    layout();
}
