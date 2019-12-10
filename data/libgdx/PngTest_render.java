public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    if (screenshot == null) {
        int width = Gdx.graphics.getWidth(), height = Gdx.graphics.getHeight();
        for (int i = 0; i < 100; i++) batch.draw(badlogic, MathUtils.random(width), MathUtils.random(height));
        batch.flush();
        FileHandle file = FileHandle.tempFile("screenshot-");
        System.out.println(file.file().getAbsolutePath());
        Pixmap pixmap = ScreenUtils.getFrameBufferPixmap(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
        try {
            PNG writer = new PNG((int) (pixmap.getWidth() * pixmap.getHeight() * 1.5f));
            // writer.setCompression(Deflater.NO_COMPRESSION);
            writer.write(file, pixmap);
            // Write twice to make sure the object is reusable.
            writer.write(file, pixmap);
            writer.dispose();
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
        screenshot = new Texture(file);
    }
    batch.draw(screenshot, 0, 0);
    batch.end();
}
