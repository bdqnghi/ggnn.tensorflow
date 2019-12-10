@Override
public boolean isButtonPressed(int button) {
    return Mouse.isButtonDown(toLwjglButton(button));
}
