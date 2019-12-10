@Override
public boolean getButton(int buttonCode) {
    return buttons.get(buttonCode, 0) >= 0.5f;
}
