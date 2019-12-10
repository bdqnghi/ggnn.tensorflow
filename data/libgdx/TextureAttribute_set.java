public void set(final TextureRegion region) {
    textureDescription.texture = region.getTexture();
    offsetU = region.getU();
    offsetV = region.getV();
    scaleU = region.getU2() - offsetU;
    scaleV = region.getV2() - offsetV;
}
