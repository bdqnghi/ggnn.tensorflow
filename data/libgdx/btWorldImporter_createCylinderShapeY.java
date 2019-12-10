public btCollisionShape createCylinderShapeY(float radius, float height) {
    long cPtr = ExtrasJNI.btWorldImporter_createCylinderShapeY(swigCPtr, this, radius, height);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
