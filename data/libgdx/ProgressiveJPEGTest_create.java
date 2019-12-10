@Override
public void create() {
    batch = new SpriteBatch();
    texture = new Texture(Gdx.files.internal("data/g2d/progressive-libgdx.jpg"));
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    drawable = new TextureRegionDrawable(new TextureRegion(texture));
}
