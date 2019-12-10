/**
 * Returns whether the given vector is contained in this bounding box.
 * @param v The vector
 * @return Whether the vector is contained or not.
 */
public boolean contains(Vector3 v) {
    return min.x <= v.x && max.x >= v.x && min.y <= v.y && max.y >= v.y && min.z <= v.z && max.z >= v.z;
}
