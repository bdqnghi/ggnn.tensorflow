protected Drawable getKnobDrawable() {
    SliderStyle style = getStyle();
    return (disabled && style.disabledKnob != null) ? style.disabledKnob : (isDragging() && style.knobDown != null) ? style.knobDown : ((mouseOver && style.knobOver != null) ? style.knobOver : style.knob);
}
