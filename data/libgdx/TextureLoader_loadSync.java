@Override
public Texture loadSync(AssetManager manager, String fileName, FileHandle file, TextureParameter parameter) {
    if (info == null)
        return null;
    Texture texture = info.texture;
    if (texture != null) {
        texture.load(info.data);
    } else {
        texture = new Texture(info.data);
    }
    if (parameter != null) {
        texture.setFilter(parameter.minFilter, parameter.magFilter);
        texture.setWrap(parameter.wrapU, parameter.wrapV);
    }
    return texture;
}
