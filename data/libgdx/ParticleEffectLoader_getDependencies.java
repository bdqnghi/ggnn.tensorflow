@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, ParticleEffectParameter param) {
    Array<AssetDescriptor> deps = null;
    if (param != null && param.atlasFile != null) {
        deps = new Array();
        deps.add(new AssetDescriptor<TextureAtlas>(param.atlasFile, TextureAtlas.class));
    }
    return deps;
}
