public btTypedConstraint getConstraintByIndex(int index) {
    long cPtr = ExtrasJNI.btWorldImporter_getConstraintByIndex(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btTypedConstraint(cPtr, false);
}
