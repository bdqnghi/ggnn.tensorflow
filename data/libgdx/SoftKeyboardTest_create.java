@Override
public void create() {
    // we want to render the input, so we need
    // a sprite batch and a font
    batch = new SpriteBatch();
    font = new BitmapFont();
    textBuffer = new SimpleCharSequence();
    // we register an InputAdapter to listen for the keyboard
    // input. The on-screen keyboard might only generate
    // "key typed" events, depending on the backend.
    Gdx.input.setInputProcessor(new InputAdapter() {

        @Override
        public boolean keyTyped(char character) {
            // convert \r to \n
            if (character == '\r')
                character = '\n';
            // if we get \b, we remove the last inserted character
            if (character == '\b' && textBuffer.length() > 0) {
                textBuffer.delete();
            }
            // else we just insert the character
            textBuffer.add(character);
            return true;
        }
    });
}
