@Override
public boolean pan(float x, float y, float deltaX, float deltaY) {
    // Gdx.app.log("GestureDetectorTest", "pan at " + x + ", " + y);
    camera.position.add(-deltaX * camera.zoom, deltaY * camera.zoom, 0);
    return false;
}
