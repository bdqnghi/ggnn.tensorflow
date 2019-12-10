public static long SwigDirector_btBulletWorldImporter_createBvhTriangleMeshShape(btBulletWorldImporter jself, long trimesh, long bvh) {
    return btBvhTriangleMeshShape.getCPtr(jself.createBvhTriangleMeshShape((trimesh == 0) ? null : new btStridingMeshInterface(trimesh, false), (bvh == 0) ? null : new btOptimizedBvh(bvh, false)));
}
