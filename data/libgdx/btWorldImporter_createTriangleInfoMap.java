public btTriangleInfoMap createTriangleInfoMap() {
    long cPtr = ExtrasJNI.btWorldImporter_createTriangleInfoMap(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleInfoMap(cPtr, false);
}
