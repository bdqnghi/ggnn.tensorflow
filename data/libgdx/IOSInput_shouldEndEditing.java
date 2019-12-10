@Override
public boolean shouldEndEditing(UITextField textField) {
    // Text field needs to have at least one symbol - so we can use backspace
    textField.setText("x");
    Gdx.graphics.requestRendering();
    return true;
}
