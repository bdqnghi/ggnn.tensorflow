/**
 * @return the euclidean length of this quaternion
 */
public float len() {
    return (float) Math.sqrt(x * x + y * y + z * z + w * w);
}
