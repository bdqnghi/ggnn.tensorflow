@Override
public void deleteBackward() {
    app.input.inputProcessor.keyTyped((char) 8);
    super.deleteBackward();
    Gdx.graphics.requestRendering();
}
