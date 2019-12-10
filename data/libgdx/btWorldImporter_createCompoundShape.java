public btCompoundShape createCompoundShape() {
    long cPtr = ExtrasJNI.btWorldImporter_createCompoundShape(swigCPtr, this);
    return (cPtr == 0) ? null : new btCompoundShape(cPtr, false);
}
