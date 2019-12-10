public btCollisionShape createPlaneShape(Vector3 planeNormal, float planeConstant) {
    long cPtr = ExtrasJNI.btWorldImporter_createPlaneShape(swigCPtr, this, planeNormal, planeConstant);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
