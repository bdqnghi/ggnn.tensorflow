@Override
public Cubemap loadSync(AssetManager manager, String fileName, FileHandle file, CubemapParameter parameter) {
    if (info == null)
        return null;
    Cubemap cubemap = info.cubemap;
    if (cubemap != null) {
        cubemap.load(info.data);
    } else {
        cubemap = new Cubemap(info.data);
    }
    if (parameter != null) {
        cubemap.setFilter(parameter.minFilter, parameter.magFilter);
        cubemap.setWrap(parameter.wrapU, parameter.wrapV);
    }
    return cubemap;
}
