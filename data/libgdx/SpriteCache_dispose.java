/**
 * Releases all resources held by this SpriteCache.
 */
public void dispose() {
    mesh.dispose();
    if (shader != null)
        shader.dispose();
}
