@Override
public boolean scrolled(int amount) {
    cam.fieldOfView -= -amount * Gdx.graphics.getDeltaTime() * 100;
    cam.update();
    return true;
}
