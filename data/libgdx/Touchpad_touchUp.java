@Override
public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    touched = false;
    calculatePositionAndValue(x, y, resetOnTouchUp);
}
