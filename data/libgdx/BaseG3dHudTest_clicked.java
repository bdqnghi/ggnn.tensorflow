@Override
public void clicked(InputEvent event, float x, float y) {
    if (getTapCount() == 2 && getHeight() - y <= getPadTop() && y < getHeight() && x > 0 && x < getWidth())
        toggleCollapsed();
}
