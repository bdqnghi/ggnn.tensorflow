@Override
public boolean touchDragged(int screenX, int screenY, int pointer) {
    float deltaX = -Gdx.input.getDeltaX() * degreesPerPixel;
    float deltaY = -Gdx.input.getDeltaY() * degreesPerPixel;
    camera.direction.rotate(camera.up, deltaX);
    tmp.set(camera.direction).crs(camera.up).nor();
    camera.direction.rotate(tmp, deltaY);
    // camera.up.rotate(tmp, deltaY);
    return true;
}
