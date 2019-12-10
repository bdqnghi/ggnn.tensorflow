/**
 * Sets this matrix to a translation and scaling matrix by first overwriting it with an identity and then setting the
 * translation vector in the 4th column and the scaling vector in the diagonal.
 *
 * @param translationX The x-component of the translation vector
 * @param translationY The y-component of the translation vector
 * @param translationZ The z-component of the translation vector
 * @param scalingX The x-component of the scaling vector
 * @param scalingY The x-component of the scaling vector
 * @param scalingZ The x-component of the scaling vector
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToTranslationAndScaling(float translationX, float translationY, float translationZ, float scalingX, float scalingY, float scalingZ) {
    idt();
    val[M03] = translationX;
    val[M13] = translationY;
    val[M23] = translationZ;
    val[M00] = scalingX;
    val[M11] = scalingY;
    val[M22] = scalingZ;
    return this;
}
