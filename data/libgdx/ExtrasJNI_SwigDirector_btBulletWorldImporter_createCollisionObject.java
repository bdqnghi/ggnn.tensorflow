public static long SwigDirector_btBulletWorldImporter_createCollisionObject(btBulletWorldImporter jself, Matrix4 startTransform, long shape, String bodyName) {
    return btCollisionObject.getCPtr(jself.createCollisionObject(startTransform, (shape == 0) ? null : new btCollisionShape(shape, false), bodyName));
}
