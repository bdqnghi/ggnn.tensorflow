protected Drawable getKnobDrawable() {
    return (disabled && style.disabledKnob != null) ? style.disabledKnob : style.knob;
}
