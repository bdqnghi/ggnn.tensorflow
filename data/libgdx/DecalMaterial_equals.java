@Override
public boolean equals(Object o) {
    if (o == null)
        return false;
    DecalMaterial material = (DecalMaterial) o;
    return dstBlendFactor == material.dstBlendFactor && srcBlendFactor == material.srcBlendFactor && textureRegion.getTexture() == material.textureRegion.getTexture();
}
