@Override
public void resize(int width, int height) {
    float ratio = ((float) Gdx.graphics.getWidth() / (float) Gdx.graphics.getHeight());
    int h = 10;
    int w = (int) (h * ratio);
    camera = new OrthographicCamera(w, h);
}
