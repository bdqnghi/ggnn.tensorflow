// TODO : this would better fit into the vector3 class
/**
 * Transforms the given vector using this quaternion
 *
 * @param v Vector to transform
 */
public Vector3 transform(Vector3 v) {
    tmp2.set(this);
    tmp2.conjugate();
    tmp2.mulLeft(tmp1.set(v.x, v.y, v.z, 0)).mulLeft(this);
    v.x = tmp2.x;
    v.y = tmp2.y;
    v.z = tmp2.z;
    return v;
}
