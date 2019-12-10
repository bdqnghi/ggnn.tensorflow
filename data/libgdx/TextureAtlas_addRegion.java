/**
 * Adds a region to the atlas. The texture for the specified region will be disposed when the atlas is disposed.
 */
public AtlasRegion addRegion(String name, TextureRegion textureRegion) {
    return addRegion(name, textureRegion.texture, textureRegion.getRegionX(), textureRegion.getRegionY(), textureRegion.getRegionWidth(), textureRegion.getRegionHeight());
}
