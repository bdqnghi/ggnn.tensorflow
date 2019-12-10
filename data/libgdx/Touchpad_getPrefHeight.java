@Override
public float getPrefHeight() {
    return style.background != null ? style.background.getMinHeight() : 0;
}
