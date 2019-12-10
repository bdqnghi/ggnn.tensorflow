@Override
public void create() {
    batch = new SpriteBatch();
    shapeRenderer = new ShapeRenderer();
    camera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.position.set(Gdx.graphics.getWidth() / 2, Gdx.graphics.getHeight() / 2, 0);
    camera.update();
    Pixmap pixmap1 = new Pixmap(Gdx.files.internal("data/badlogic.jpg"));
    Pixmap pixmap2 = new Pixmap(Gdx.files.internal("data/particle-fire.png"));
    Pixmap pixmap3 = new Pixmap(Gdx.files.internal("data/isotile.png"));
    PixmapPacker packer = new PixmapPacker(1024, 1024, Format.RGBA8888, 8, false);
    for (int count = 1; count <= 3; ++count) {
        packer.pack("badlogic " + count, pixmap1);
        packer.pack("fire " + count, pixmap2);
        packer.pack("isotile " + count, pixmap3);
    }
    atlas = packer.generateTextureAtlas(TextureFilter.Nearest, TextureFilter.Nearest, false);
    Gdx.app.log("PixmapPackerTest", "Number of initial textures: " + atlas.getTextures().size);
    packer.setPackToTexture(true);
    for (int count = 4; count <= 10; ++count) {
        packer.pack("badlogic " + count, pixmap1);
        packer.pack("fire " + count, pixmap2);
        packer.pack("isotile " + count, pixmap3);
    }
    pixmap1.dispose();
    pixmap2.dispose();
    pixmap3.dispose();
    packer.updateTextureAtlas(atlas, TextureFilter.Nearest, TextureFilter.Nearest, false);
    textureRegions = new Array<TextureRegion>();
    packer.updateTextureRegions(textureRegions, TextureFilter.Nearest, TextureFilter.Nearest, false);
    Gdx.app.log("PixmapPackerTest", "Number of updated textures: " + atlas.getTextures().size);
    Gdx.input.setInputProcessor(new InputAdapter() {

        @Override
        public boolean keyDown(int keycode) {
            if (keycode >= Input.Keys.NUM_0 && keycode <= Input.Keys.NUM_9) {
                int number = keycode - Input.Keys.NUM_0;
                if (number < textureRegions.size) {
                    pageToShow = number;
                }
            }
            return super.keyDown(keycode);
        }
    });
}
