/**
 * Sets the blending parameters for this decal
 *
 * @param srcBlendFactor Source blend factor used by glBlendFunc
 * @param dstBlendFactor Destination blend factor used by glBlendFunc
 */
public void setBlending(int srcBlendFactor, int dstBlendFactor) {
    material.srcBlendFactor = srcBlendFactor;
    material.dstBlendFactor = dstBlendFactor;
}
