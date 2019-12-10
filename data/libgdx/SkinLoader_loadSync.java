@Override
public Skin loadSync(AssetManager manager, String fileName, FileHandle file, SkinParameter parameter) {
    String textureAtlasPath = file.pathWithoutExtension() + ".atlas";
    ObjectMap<String, Object> resources = null;
    if (parameter != null) {
        if (parameter.textureAtlasPath != null) {
            textureAtlasPath = parameter.textureAtlasPath;
        }
        if (parameter.resources != null) {
            resources = parameter.resources;
        }
    }
    TextureAtlas atlas = manager.get(textureAtlasPath, TextureAtlas.class);
    Skin skin = new Skin(atlas);
    if (resources != null) {
        for (Entry<String, Object> entry : resources.entries()) {
            skin.add(entry.key, entry.value);
        }
    }
    skin.load(file);
    return skin;
}
