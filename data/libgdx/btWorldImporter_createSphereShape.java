public btCollisionShape createSphereShape(float radius) {
    long cPtr = ExtrasJNI.btWorldImporter_createSphereShape(swigCPtr, this, radius);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
