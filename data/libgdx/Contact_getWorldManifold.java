/**
 * Get the world manifold.
 */
public WorldManifold getWorldManifold() {
    int numContactPoints = jniGetWorldManifold(addr, tmp);
    worldManifold.numContactPoints = numContactPoints;
    worldManifold.normal.set(tmp[0], tmp[1]);
    for (int i = 0; i < numContactPoints; i++) {
        Vector2 point = worldManifold.points[i];
        point.x = tmp[2 + i * 2];
        point.y = tmp[2 + i * 2 + 1];
    }
    worldManifold.separations[0] = tmp[6];
    worldManifold.separations[1] = tmp[7];
    return worldManifold;
}
