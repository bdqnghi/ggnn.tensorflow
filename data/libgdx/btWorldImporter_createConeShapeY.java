public btCollisionShape createConeShapeY(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createConeShapeY(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
