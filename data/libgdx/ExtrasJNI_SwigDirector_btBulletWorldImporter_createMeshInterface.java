public static long SwigDirector_btBulletWorldImporter_createMeshInterface(btBulletWorldImporter jself, long meshData) {
    return btTriangleIndexVertexArray.getCPtr(jself.createMeshInterface(new btStridingMeshInterfaceData(meshData, false)));
}
