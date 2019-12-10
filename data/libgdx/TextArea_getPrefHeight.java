@Override
public float getPrefHeight() {
    if (prefRows <= 0) {
        return super.getPrefHeight();
    } else {
        float prefHeight = textHeight * prefRows;
        if (style.background != null) {
            prefHeight = Math.max(prefHeight + style.background.getBottomHeight() + style.background.getTopHeight(), style.background.getMinHeight());
        }
        return prefHeight;
    }
}
