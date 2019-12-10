public btCollisionShape createConeShapeX(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createConeShapeX(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
