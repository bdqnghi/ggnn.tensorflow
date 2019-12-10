@Override
public ParticleEffect load(AssetManager am, String fileName, FileHandle file, ParticleEffectParameter param) {
    ParticleEffect effect = new ParticleEffect();
    if (param != null && param.atlasFile != null)
        effect.load(file, am.get(param.atlasFile, TextureAtlas.class), param.atlasPrefix);
    else if (param != null && param.imagesDir != null)
        effect.load(file, param.imagesDir);
    else
        effect.load(file, file.parent());
    return effect;
}
