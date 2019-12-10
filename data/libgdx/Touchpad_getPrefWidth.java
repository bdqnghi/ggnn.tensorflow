@Override
public float getPrefWidth() {
    return style.background != null ? style.background.getMinWidth() : 0;
}
