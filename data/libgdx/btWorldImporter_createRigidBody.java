public btRigidBody createRigidBody(boolean isDynamic, float mass, Matrix4 startTransform, btCollisionShape shape, String bodyName) {
    return btRigidBody.getInstance(ExtrasJNI.btWorldImporter_createRigidBody(swigCPtr, this, isDynamic, mass, startTransform, btCollisionShape.getCPtr(shape), shape, bodyName), false);
}
