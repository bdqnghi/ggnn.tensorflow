boolean calculatePositionAndValue(float x, float y) {
    final SliderStyle style = getStyle();
    final Drawable knob = getKnobDrawable();
    final Drawable bg = (disabled && style.disabledBackground != null) ? style.disabledBackground : style.background;
    float value;
    float oldPosition = position;
    final float min = getMinValue();
    final float max = getMaxValue();
    if (vertical) {
        float height = getHeight() - bg.getTopHeight() - bg.getBottomHeight();
        float knobHeight = knob == null ? 0 : knob.getMinHeight();
        position = y - bg.getBottomHeight() - knobHeight * 0.5f;
        value = min + (max - min) * visualInterpolationInverse.apply(position / (height - knobHeight));
        position = Math.max(0, position);
        position = Math.min(height - knobHeight, position);
    } else {
        float width = getWidth() - bg.getLeftWidth() - bg.getRightWidth();
        float knobWidth = knob == null ? 0 : knob.getMinWidth();
        position = x - bg.getLeftWidth() - knobWidth * 0.5f;
        value = min + (max - min) * visualInterpolationInverse.apply(position / (width - knobWidth));
        position = Math.max(0, position);
        position = Math.min(width - knobWidth, position);
    }
    float oldValue = value;
    boolean valueSet = setValue(value);
    if (value == oldValue)
        position = oldPosition;
    return valueSet;
}
