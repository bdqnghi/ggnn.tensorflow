@Override
public boolean panStop(float x, float y, int pointer, int button) {
    Gdx.app.log("GestureDetectorTest", "pan stop at " + x + ", " + y);
    return false;
}
