/**
 * Multiplies the vector by the given {@link Quaternion}.
 * @return This vector for chaining
 */
public Vector3 mul(final Quaternion quat) {
    return quat.transform(this);
}
