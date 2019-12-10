@Override
public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (touched)
        return false;
    touched = true;
    calculatePositionAndValue(x, y, false);
    return true;
}
