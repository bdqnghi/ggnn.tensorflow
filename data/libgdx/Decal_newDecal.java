/**
 * Creates a decal using the region for texturing and the specified blending parameters for blending
 *
 * @param width Width of the decal in world units
 * @param height Height of the decal in world units
 * @param textureRegion TextureRegion to use
 * @param srcBlendFactor Source blend used by glBlendFunc
 * @param dstBlendFactor Destination blend used by glBlendFunc
 * @param material Custom decal material
 * @return Created decal
 */
public static Decal newDecal(float width, float height, TextureRegion textureRegion, int srcBlendFactor, int dstBlendFactor, DecalMaterial material) {
    Decal decal = new Decal(material);
    decal.setTextureRegion(textureRegion);
    decal.setBlending(srcBlendFactor, dstBlendFactor);
    decal.dimensions.x = width;
    decal.dimensions.y = height;
    decal.setColor(1, 1, 1, 1);
    return decal;
}
