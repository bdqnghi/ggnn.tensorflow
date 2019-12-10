private void loadMeshes(Iterable<ModelMesh> meshes) {
    for (ModelMesh mesh : meshes) {
        convertMesh(mesh);
    }
}
