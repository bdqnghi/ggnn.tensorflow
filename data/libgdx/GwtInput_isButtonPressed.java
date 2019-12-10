@Override
public boolean isButtonPressed(int button) {
    return button == Buttons.LEFT && touched[0];
}
