public btCollisionShape createCylinderShapeZ(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createCylinderShapeZ(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
