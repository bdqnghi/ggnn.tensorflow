public void draw(Batch batch, float parentAlpha) {
    validate();
    boolean isPressed = isPressed();
    boolean isDisabled = isDisabled();
    Drawable background = null;
    if (isDisabled && style.disabled != null)
        background = style.disabled;
    else if (isPressed && style.down != null)
        background = style.down;
    else if (isChecked && style.checked != null)
        background = (style.checkedOver != null && isOver()) ? style.checkedOver : style.checked;
    else if (isOver() && style.over != null)
        background = style.over;
    else if (// 
    style.up != null)
        background = style.up;
    setBackground(background);
    float offsetX = 0, offsetY = 0;
    if (isPressed && !isDisabled) {
        offsetX = style.pressedOffsetX;
        offsetY = style.pressedOffsetY;
    } else if (isChecked && !isDisabled) {
        offsetX = style.checkedOffsetX;
        offsetY = style.checkedOffsetY;
    } else {
        offsetX = style.unpressedOffsetX;
        offsetY = style.unpressedOffsetY;
    }
    Array<Actor> children = getChildren();
    for (int i = 0; i < children.size; i++) children.get(i).moveBy(offsetX, offsetY);
    super.draw(batch, parentAlpha);
    for (int i = 0; i < children.size; i++) children.get(i).moveBy(-offsetX, -offsetY);
    Stage stage = getStage();
    if (stage != null && stage.getActionsRequestRendering() && isPressed != clickListener.isPressed())
        Gdx.graphics.requestRendering();
}
