@Override
public void resize(int width, int height) {
    w = Gdx.graphics.getWidth() / 0.8f;
    h = Gdx.graphics.getHeight() / 0.8f;
    cam = new OrthographicCamera(width, height);
    cam.near = 0.1f;
    cam.far = 10f;
    cam.position.set(0, 0, 0.1f);
    cam.direction.set(0, 0, -1f);
}
