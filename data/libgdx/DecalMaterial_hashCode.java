@Override
public int hashCode() {
    int result = textureRegion.getTexture() != null ? textureRegion.getTexture().hashCode() : 0;
    result = 31 * result + srcBlendFactor;
    result = 31 * result + dstBlendFactor;
    return result;
}
