@Override
public boolean tap(float x, float y, int count, int button) {
    Gdx.app.log("GestureDetectorTest", "tap at " + x + ", " + y + ", count: " + count);
    return false;
}
