public static long SwigDirector_btBulletWorldImporter_createRigidBody(btBulletWorldImporter jself, boolean isDynamic, float mass, Matrix4 startTransform, long shape, String bodyName) {
    return btRigidBody.getCPtr(jself.createRigidBody(isDynamic, mass, startTransform, (shape == 0) ? null : new btCollisionShape(shape, false), bodyName));
}
