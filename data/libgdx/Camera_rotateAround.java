/**
 * Rotates the direction and up vector of this camera by the given angle around the given axis, with the axis attached to given
 * point. The direction and up vector will not be orthogonalized.
 *
 * @param point the point to attach the axis to
 * @param axis the axis to rotate around
 * @param angle the angle
 */
public void rotateAround(Vector3 point, Vector3 axis, float angle) {
    tmpVec.set(point);
    tmpVec.sub(position);
    translate(tmpVec);
    rotate(axis, angle);
    tmpVec.rotate(axis, angle);
    translate(-tmpVec.x, -tmpVec.y, -tmpVec.z);
}
