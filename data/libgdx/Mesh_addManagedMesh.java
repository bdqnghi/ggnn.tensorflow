private static void addManagedMesh(Application app, Mesh mesh) {
    Array<Mesh> managedResources = meshes.get(app);
    if (managedResources == null)
        managedResources = new Array<Mesh>();
    managedResources.add(mesh);
    meshes.put(app, managedResources);
}
