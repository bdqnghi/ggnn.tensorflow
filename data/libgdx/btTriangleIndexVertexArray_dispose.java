@Override
public void dispose() {
    for (final btIndexedMesh mesh : meshes) mesh.release();
    meshes.clear();
    super.dispose();
}
