public static long SwigDirector_btBulletWorldImporter_createConvexTriangleMeshShape(btBulletWorldImporter jself, long trimesh) {
    return btCollisionShape.getCPtr(jself.createConvexTriangleMeshShape((trimesh == 0) ? null : new btStridingMeshInterface(trimesh, false)));
}
