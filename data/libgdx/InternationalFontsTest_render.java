@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.setProjectionMatrix(cam.combined);
    batch.begin();
    koreanFont.draw(batch, "한국어/조선�?", 0, 22);
    cyrillicFont.draw(batch, "cyrillic text", 0, 44);
    thaiFont.draw(batch, "วรรณยุ�?ต์", 0, 66);
    batch.end();
}
