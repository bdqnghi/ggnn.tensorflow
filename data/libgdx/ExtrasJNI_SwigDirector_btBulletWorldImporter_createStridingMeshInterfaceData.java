public static long SwigDirector_btBulletWorldImporter_createStridingMeshInterfaceData(btBulletWorldImporter jself, long interfaceData) {
    return btStridingMeshInterfaceData.getCPtr(jself.createStridingMeshInterfaceData((interfaceData == 0) ? null : new btStridingMeshInterfaceData(interfaceData, false)));
}
