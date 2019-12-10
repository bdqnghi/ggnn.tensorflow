/**
 * Compares this vector with the other vector, using the supplied epsilon for fuzzy equality testing.
 * @return whether the vectors are the same.
 */
public boolean epsilonEquals(float x, float y, float z, float epsilon) {
    if (Math.abs(x - this.x) > epsilon)
        return false;
    if (Math.abs(y - this.y) > epsilon)
        return false;
    if (Math.abs(z - this.z) > epsilon)
        return false;
    return true;
}
