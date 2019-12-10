public Actor hit(float x, float y, boolean touchable) {
    if (clip) {
        if (touchable && getTouchable() == Touchable.disabled)
            return null;
        if (x < 0 || x >= getWidth() || y < 0 || y >= getHeight())
            return null;
    }
    return super.hit(x, y, touchable);
}
