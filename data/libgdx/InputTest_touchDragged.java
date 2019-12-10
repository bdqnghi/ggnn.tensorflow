@Override
public boolean touchDragged(int x, int y, int pointer) {
    Gdx.app.log("Input Test", "touch dragged: " + x + ", " + y + ", pointer: " + pointer);
    return false;
}
