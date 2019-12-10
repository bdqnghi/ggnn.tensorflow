public btCollisionShape createCapsuleShapeY(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createCapsuleShapeY(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
