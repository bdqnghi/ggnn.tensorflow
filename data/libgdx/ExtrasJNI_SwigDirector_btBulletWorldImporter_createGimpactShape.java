public static long SwigDirector_btBulletWorldImporter_createGimpactShape(btBulletWorldImporter jself, long trimesh) {
    return btGImpactMeshShape.getCPtr(jself.createGimpactShape((trimesh == 0) ? null : new btStridingMeshInterface(trimesh, false)));
}
