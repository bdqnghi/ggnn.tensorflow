void calculatePositionAndValue(float x, float y, boolean isTouchUp) {
    float oldPositionX = knobPosition.x;
    float oldPositionY = knobPosition.y;
    float oldPercentX = knobPercent.x;
    float oldPercentY = knobPercent.y;
    float centerX = knobBounds.x;
    float centerY = knobBounds.y;
    knobPosition.set(centerX, centerY);
    knobPercent.set(0f, 0f);
    if (!isTouchUp) {
        if (!deadzoneBounds.contains(x, y)) {
            knobPercent.set((x - centerX) / knobBounds.radius, (y - centerY) / knobBounds.radius);
            float length = knobPercent.len();
            if (length > 1)
                knobPercent.scl(1 / length);
            if (knobBounds.contains(x, y)) {
                knobPosition.set(x, y);
            } else {
                knobPosition.set(knobPercent).nor().scl(knobBounds.radius).add(knobBounds.x, knobBounds.y);
            }
        }
    }
    if (oldPercentX != knobPercent.x || oldPercentY != knobPercent.y) {
        ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
        if (fire(changeEvent)) {
            knobPercent.set(oldPercentX, oldPercentY);
            knobPosition.set(oldPositionX, oldPositionY);
        }
        Pools.free(changeEvent);
    }
}
