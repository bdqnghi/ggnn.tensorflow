/**
 * Frees all resources associated with this Mesh
 */
public void dispose() {
    if (meshes.get(Gdx.app) != null)
        meshes.get(Gdx.app).removeValue(this, true);
    vertices.dispose();
    indices.dispose();
}
