@Override
public void create() {
    // create the SpriteBatch
    batch = new SpriteBatch();
    // load a texture, usually you dispose of this
    // eventually.
    texture = new Texture("data/badlogicsmall.jpg");
    // can see that the sorting works.
    for (int i = 0; i < 100; i++) {
        // create the sprite and set a random position
        MySprite sprite = new MySprite(texture);
        sprite.setPosition(MathUtils.random() * Gdx.graphics.getWidth(), MathUtils.random() * Gdx.graphics.getHeight());
        // create a random z coordinate in the range 0-1
        sprite.z = MathUtils.random();
        // set the tinting color to the z coordinate as well
        // for visual inspection
        sprite.setColor(sprite.z, 0, 0, 1);
        // add the sprite to the array
        sprites.add(sprite);
    }
}
