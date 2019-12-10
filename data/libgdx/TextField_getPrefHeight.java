public float getPrefHeight() {
    float prefHeight = textHeight;
    if (style.background != null) {
        prefHeight = Math.max(prefHeight + style.background.getBottomHeight() + style.background.getTopHeight(), style.background.getMinHeight());
    }
    return prefHeight;
}
