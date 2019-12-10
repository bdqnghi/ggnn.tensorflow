public btCollisionShape getCollisionShapeByName(String name) {
    long cPtr = ExtrasJNI.btWorldImporter_getCollisionShapeByName(swigCPtr, this, name);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
