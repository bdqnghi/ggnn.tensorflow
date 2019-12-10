public Actor hit(float x, float y, boolean touchable) {
    Actor hit = super.hit(x, y, touchable);
    if (hit == null && isModal && (!touchable || getTouchable() == Touchable.enabled))
        return this;
    float height = getHeight();
    if (hit == null || hit == this)
        return hit;
    if (y <= height && y >= height - getPadTop() && x >= 0 && x <= getWidth()) {
        // Hit the title bar, don't use the hit child if it is in the Window's table.
        Actor current = hit;
        while (current.getParent() != this) current = current.getParent();
        if (getCell(current) != null)
            return this;
    }
    return hit;
}
