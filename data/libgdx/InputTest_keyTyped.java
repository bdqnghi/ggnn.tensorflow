@Override
public boolean keyTyped(char character) {
    Gdx.app.log("Input Test", "key typed: '" + character + "'");
    return false;
}
