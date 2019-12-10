public boolean isUsingDefaultTexture() {
    return renderer.billboardBatch.getTexture() == assetManager.get(DEFAULT_BILLBOARD_PARTICLE, Texture.class);
}
