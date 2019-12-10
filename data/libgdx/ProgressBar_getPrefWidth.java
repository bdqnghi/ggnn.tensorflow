public float getPrefWidth() {
    if (vertical) {
        final Drawable knob = getKnobDrawable();
        final Drawable bg = (disabled && style.disabledBackground != null) ? style.disabledBackground : style.background;
        return Math.max(knob == null ? 0 : knob.getMinWidth(), bg.getMinWidth());
    } else
        return 140;
}
