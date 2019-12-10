@Override
public boolean isButtonPressed(int button) {
    return button == Buttons.LEFT && numTouched > 0;
}
