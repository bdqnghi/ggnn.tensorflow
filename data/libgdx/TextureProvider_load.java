@Override
public Texture load(String fileName) {
    return assetManager.get(fileName, Texture.class);
}
