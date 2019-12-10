/**
 * Sets the texture region
 *
 * @param textureRegion Texture region to apply
 */
public void setTextureRegion(TextureRegion textureRegion) {
    this.material.textureRegion = textureRegion;
    updateUVs();
}
