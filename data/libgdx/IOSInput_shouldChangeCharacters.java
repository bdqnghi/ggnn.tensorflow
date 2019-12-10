@Override
public boolean shouldChangeCharacters(UITextField textField, NSRange range, String string) {
    for (int i = 0; i < range.getLength(); i++) {
        app.input.inputProcessor.keyTyped((char) 8);
    }
    if (string.isEmpty()) {
        if (range.getLength() > 0)
            Gdx.graphics.requestRendering();
        return false;
    }
    char[] chars = new char[string.length()];
    string.getChars(0, string.length(), chars, 0);
    for (int i = 0; i < chars.length; i++) {
        app.input.inputProcessor.keyTyped(chars[i]);
    }
    Gdx.graphics.requestRendering();
    return true;
}
