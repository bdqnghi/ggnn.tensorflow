/**
 * Sets this matrix to a look at matrix with the given position, target and up vector.
 *
 * @param position the position
 * @param target the target
 * @param up the up vector
 * @return This matrix
 */
public Matrix4 setToLookAt(Vector3 position, Vector3 target, Vector3 up) {
    tmpVec.set(target).sub(position);
    setToLookAt(tmpVec, up);
    this.mul(tmpMat.setToTranslation(-position.x, -position.y, -position.z));
    return this;
}
