@Override
public void layout() {
    // Recalc pad and deadzone bounds
    float halfWidth = getWidth() / 2;
    float halfHeight = getHeight() / 2;
    float radius = Math.min(halfWidth, halfHeight);
    touchBounds.set(halfWidth, halfHeight, radius);
    if (style.knob != null)
        radius -= Math.max(style.knob.getMinWidth(), style.knob.getMinHeight()) / 2;
    knobBounds.set(halfWidth, halfHeight, radius);
    deadzoneBounds.set(halfWidth, halfHeight, deadzoneRadius);
    // Recalc pad values and knob position
    knobPosition.set(halfWidth, halfHeight);
    knobPercent.set(0, 0);
}
