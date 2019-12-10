public static long SwigDirector_btBulletWorldImporter_createPlaneShape(btBulletWorldImporter jself, Vector3 planeNormal, float planeConstant) {
    return btCollisionShape.getCPtr(jself.createPlaneShape(planeNormal, planeConstant));
}
