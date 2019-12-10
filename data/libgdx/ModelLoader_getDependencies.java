@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, P parameters) {
    final Array<AssetDescriptor> deps = new Array();
    ModelData data = loadModelData(file, parameters);
    if (data == null)
        return deps;
    ObjectMap.Entry<String, ModelData> item = new ObjectMap.Entry<String, ModelData>();
    item.key = fileName;
    item.value = data;
    synchronized (items) {
        items.add(item);
    }
    TextureLoader.TextureParameter textureParameter = (parameters != null) ? parameters.textureParameter : defaultParameters.textureParameter;
    for (final ModelMaterial modelMaterial : data.materials) {
        if (modelMaterial.textures != null) {
            for (final ModelTexture modelTexture : modelMaterial.textures) deps.add(new AssetDescriptor(modelTexture.fileName, Texture.class, textureParameter));
        }
    }
    return deps;
}
