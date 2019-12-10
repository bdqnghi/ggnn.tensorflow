@Override
public void create() {
    batch = new SpriteBatch();
    font = new BitmapFont();
    stage = new Stage(new ScalingViewport(Scaling.fit, 24, 12));
    regions = new TextureRegion[8 * 8];
    sprites = new Sprite[24 * 12];
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            regions[x + y * 8] = new TextureRegion(texture, x * 32, y * 32, 32, 32);
        }
    }
    Random rand = new Random();
    for (int y = 0, i = 0; y < 12; y++) {
        for (int x = 0; x < 24; x++) {
            Image img = new Image(regions[rand.nextInt(8 * 8)]);
            img.setBounds(x, y, 1, 1);
            stage.addActor(img);
            sprites[i] = new Sprite(regions[rand.nextInt(8 * 8)]);
            sprites[i].setPosition(x, y);
            sprites[i].setSize(1, 1);
            i++;
        }
    }
}
