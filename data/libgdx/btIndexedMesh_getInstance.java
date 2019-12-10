protected static btIndexedMesh getInstance(final Object tag) {
    final int n = instances.size;
    for (int i = 0; i < n; i++) {
        final btIndexedMesh mesh = instances.get(i);
        if (tag.equals(mesh.tag))
            return mesh;
    }
    return null;
}
