public btCollisionShape createCylinderShapeX(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createCylinderShapeX(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
