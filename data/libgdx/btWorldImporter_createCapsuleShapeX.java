public btCollisionShape createCapsuleShapeX(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createCapsuleShapeX(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
