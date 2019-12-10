@Override
public boolean isButtonPressed(int button) {
    if (button != Buttons.LEFT)
        return false;
    for (int i = 0; i < isTouched.length; i++) if (isTouched[i])
        return true;
    return false;
}
