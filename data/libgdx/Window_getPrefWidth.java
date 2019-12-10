public float getPrefWidth() {
    return Math.max(super.getPrefWidth(), titleLabel.getPrefWidth() + getPadLeft() + getPadRight());
}
