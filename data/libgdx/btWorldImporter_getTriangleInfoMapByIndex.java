public btTriangleInfoMap getTriangleInfoMapByIndex(int index) {
    long cPtr = ExtrasJNI.btWorldImporter_getTriangleInfoMapByIndex(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btTriangleInfoMap(cPtr, false);
}
