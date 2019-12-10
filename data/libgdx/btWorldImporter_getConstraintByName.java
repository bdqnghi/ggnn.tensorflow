public btTypedConstraint getConstraintByName(String name) {
    long cPtr = ExtrasJNI.btWorldImporter_getConstraintByName(swigCPtr, this, name);
    return (cPtr == 0) ? null : new btTypedConstraint(cPtr, false);
}
