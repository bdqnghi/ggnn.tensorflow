@Override
public boolean keyTyped(InputEvent event, char character) {
    boolean result = super.keyTyped(event, character);
    showCursor();
    return result;
}
