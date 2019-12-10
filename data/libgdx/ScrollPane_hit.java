public Actor hit(float x, float y, boolean touchable) {
    if (x < 0 || x >= getWidth() || y < 0 || y >= getHeight())
        return null;
    if (scrollX && hScrollBounds.contains(x, y))
        return this;
    if (scrollY && vScrollBounds.contains(x, y))
        return this;
    return super.hit(x, y, touchable);
}
