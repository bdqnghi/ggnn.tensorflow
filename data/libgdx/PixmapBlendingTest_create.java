@Override
public void create() {
    if (spriteBatch != null)
        return;
    spriteBatch = new SpriteBatch();
    Matrix4 transform = new Matrix4();
    transform.setToTranslation(0, Gdx.graphics.getHeight(), 0);
    transform.mul(new Matrix4().setToScaling(1, -1, 1));
    spriteBatch.setTransformMatrix(transform);
    pixS1 = new Pixmap(Gdx.files.getFileHandle("data/test4.png", Files.FileType.Internal));
    pixS2 = new Pixmap(Gdx.files.getFileHandle("data/test3.png", Files.FileType.Internal));
    pixD = new Pixmap(64, 128, Pixmap.Format.RGBA8888);
    pixD.drawPixmap(pixS1, 0, 0, 0, 0, 76, 76);
    pixD.drawPixmap(pixS2, 0, 0, 0, 0, 76, 76);
    logoSprite = new Sprite(new Texture(pixD));
    logoSprite.flip(false, true);
    pixS1.dispose();
    pixS2.dispose();
    pixD.dispose();
}
