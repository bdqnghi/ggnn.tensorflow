public static long SwigDirector_btBulletWorldImporter_createScaledTrangleMeshShape(btBulletWorldImporter jself, long meshShape, Vector3 localScalingbtBvhTriangleMeshShape) {
    return btScaledBvhTriangleMeshShape.getCPtr(jself.createScaledTrangleMeshShape((meshShape == 0) ? null : new btBvhTriangleMeshShape(meshShape, false), localScalingbtBvhTriangleMeshShape));
}
