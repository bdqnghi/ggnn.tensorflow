public btCollisionObject createCollisionObject(Matrix4 startTransform, btCollisionShape shape, String bodyName) {
    return btCollisionObject.getInstance(ExtrasJNI.btWorldImporter_createCollisionObject(swigCPtr, this, startTransform, btCollisionShape.getCPtr(shape), shape, bodyName), false);
}
