public btCollisionShape createBoxShape(Vector3 halfExtents) {
    long cPtr = ExtrasJNI.btWorldImporter_createBoxShape(swigCPtr, this, halfExtents);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
