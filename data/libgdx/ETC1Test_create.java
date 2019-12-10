@Override
public void create() {
    font = new BitmapFont();
    camera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    controller = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(controller);
    Pixmap pixmap = new Pixmap(32, 32, Format.RGB565);
    pixmap.setColor(1, 0, 0, 1);
    pixmap.fill();
    pixmap.setColor(0, 1, 0, 1);
    pixmap.drawLine(0, 0, 32, 32);
    pixmap.drawLine(0, 32, 32, 0);
    ETC1Data encodedImage = ETC1.encodeImagePKM(pixmap);
    pixmap.dispose();
    pixmap = ETC1.decodeImage(encodedImage, Format.RGB565);
    encodedImage.dispose();
    img1 = new Texture(pixmap);
    img2 = new Texture("data/test.etc1");
    batch = new SpriteBatch();
    pixmap.dispose();
}
