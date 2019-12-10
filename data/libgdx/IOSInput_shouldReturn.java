@Override
public boolean shouldReturn(UITextField textField) {
    if (keyboardCloseOnReturn)
        setOnscreenKeyboardVisible(false);
    app.input.inputProcessor.keyDown(Keys.ENTER);
    app.input.inputProcessor.keyTyped((char) 13);
    Gdx.graphics.requestRendering();
    return false;
}
