/**
 * Invalidates all cache IDs and resets the SpriteCache so new caches can be added.
 */
public void clear() {
    caches.clear();
    mesh.getVerticesBuffer().clear().flip();
}
