public void create() {
    batch = new SpriteBatch();
    renderer = new ShapeRenderer();
    atlas = new TextureAtlas(Gdx.files.internal("data/pack"));
    jumpAtlas = new TextureAtlas(Gdx.files.internal("data/jump.txt"));
    jumpAnimation = new Animation(0.25f, jumpAtlas.findRegions("ALIEN_JUMP_"));
    badlogic = atlas.createSprite("badlogicslice");
    badlogic.setPosition(50, 50);
    // badlogicSmall = atlas.createSprite("badlogicsmall");
    badlogicSmall = atlas.createSprite("badlogicsmall-rotated");
    badlogicSmall.setPosition(10, 10);
    AtlasRegion region = atlas.findRegion("badlogicsmall");
    System.out.println("badlogicSmall original size: " + region.originalWidth + ", " + region.originalHeight);
    System.out.println("badlogicSmall packed size: " + region.packedWidth + ", " + region.packedHeight);
    star = atlas.createSprite("particle-star");
    star.setPosition(10, 70);
    font = new BitmapFont(Gdx.files.internal("data/font.fnt"), atlas.findRegion("font"), false);
    Gdx.gl.glClearColor(0, 1, 0, 1);
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean keyUp(int keycode) {
            if (keycode == Keys.UP) {
                badlogicSmall.flip(false, true);
            } else if (keycode == Keys.RIGHT) {
                badlogicSmall.flip(true, false);
            } else if (keycode == Keys.LEFT) {
                badlogicSmall.setSize(512, 512);
            } else if (keycode == Keys.DOWN) {
                badlogicSmall.rotate90(true);
            }
            return super.keyUp(keycode);
        }
    });
}
