@Override
public TextureAtlas getAtlas(String name) {
    return assetManager.get(name, TextureAtlas.class);
}
