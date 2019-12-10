public btCollisionShape getCollisionShapeByIndex(int index) {
    long cPtr = ExtrasJNI.btWorldImporter_getCollisionShapeByIndex(swigCPtr, this, index);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
