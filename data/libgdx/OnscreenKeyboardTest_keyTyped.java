@Override
public boolean keyTyped(char character) {
    if (character == '\b' && text.length() >= 1) {
        text = text.substring(0, text.length() - 1);
    } else if (character == '\n') {
        Gdx.input.setOnscreenKeyboardVisible(false);
    } else {
        text += character;
    }
    return false;
}
