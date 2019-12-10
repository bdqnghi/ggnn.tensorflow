/**
 * Focuses the next TextField. If none is found, the keyboard is hidden. Does nothing if the text field is not in a stage.
 * @param up If true, the TextField with the same or next smallest y coordinate is found, else the next highest.
 */
public void next(boolean up) {
    Stage stage = getStage();
    if (stage == null)
        return;
    getParent().localToStageCoordinates(tmp1.set(getX(), getY()));
    TextField textField = findNextTextField(stage.getActors(), null, tmp2, tmp1, up);
    if (textField == null) {
        // Try to wrap around.
        if (up)
            tmp1.set(Float.MIN_VALUE, Float.MIN_VALUE);
        else
            tmp1.set(Float.MAX_VALUE, Float.MAX_VALUE);
        textField = findNextTextField(getStage().getActors(), null, tmp2, tmp1, up);
    }
    if (textField != null)
        stage.setKeyboardFocus(textField);
    else
        Gdx.input.setOnscreenKeyboardVisible(false);
}
