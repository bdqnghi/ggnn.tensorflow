@Override
public TextureAtlas load(AssetManager assetManager, String fileName, FileHandle file, TextureAtlasParameter parameter) {
    for (Page page : data.getPages()) {
        Texture texture = assetManager.get(page.textureFile.path().replaceAll("\\\\", "/"), Texture.class);
        page.texture = texture;
    }
    return new TextureAtlas(data);
}
