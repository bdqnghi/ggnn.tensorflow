public float getPrefHeight() {
    if (vertical)
        return 140;
    else {
        final Drawable knob = getKnobDrawable();
        final Drawable bg = (disabled && style.disabledBackground != null) ? style.disabledBackground : style.background;
        return Math.max(knob == null ? 0 : knob.getMinHeight(), bg == null ? 0 : bg.getMinHeight());
    }
}
