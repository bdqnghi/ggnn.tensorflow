/**
 * Conjugate the quaternion.
 *
 * @return This quaternion for chaining
 */
public Quaternion conjugate() {
    x = -x;
    y = -y;
    z = -z;
    return this;
}
