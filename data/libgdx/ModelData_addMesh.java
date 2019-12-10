public void addMesh(ModelMesh mesh) {
    for (ModelMesh other : meshes) {
        if (other.id.equals(mesh.id)) {
            throw new GdxRuntimeException("Mesh with id '" + other.id + "' already in model");
        }
    }
    meshes.add(mesh);
}
