public Actor hit(float x, float y, boolean touchable) {
    if (touchable && getTouchable() == Touchable.disabled)
        return null;
    Vector2 point = tmp;
    Actor[] childrenArray = children.items;
    for (int i = children.size - 1; i >= 0; i--) {
        Actor child = childrenArray[i];
        if (!child.isVisible())
            continue;
        child.parentToLocalCoordinates(point.set(x, y));
        Actor hit = child.hit(point.x, point.y, touchable);
        if (hit != null)
            return hit;
    }
    return super.hit(x, y, touchable);
}
