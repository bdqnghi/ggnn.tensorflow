/**
 * Invalidates all meshes so the next time they are rendered new VBO handles are generated.
 * @param app
 */
public static void invalidateAllMeshes(Application app) {
    Array<Mesh> meshesArray = meshes.get(app);
    if (meshesArray == null)
        return;
    for (int i = 0; i < meshesArray.size; i++) {
        meshesArray.get(i).vertices.invalidate();
        meshesArray.get(i).indices.invalidate();
    }
}
