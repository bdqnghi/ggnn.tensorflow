/**
 * Returns whether the given sphere is in the frustum not checking whether it is behind the near and far clipping plane.
 *
 * @param x The X coordinate of the center of the sphere
 * @param y The Y coordinate of the center of the sphere
 * @param z The Z coordinate of the center of the sphere
 * @param radius The radius of the sphere
 * @return Whether the sphere is in the frustum
 */
public boolean sphereInFrustumWithoutNearFar(float x, float y, float z, float radius) {
    for (int i = 2; i < 6; i++) if ((planes[i].normal.x * x + planes[i].normal.y * y + planes[i].normal.z * z) < (-radius - planes[i].d))
        return false;
    return true;
}
