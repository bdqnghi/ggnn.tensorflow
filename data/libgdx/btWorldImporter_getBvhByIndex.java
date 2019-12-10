public btOptimizedBvh getBvhByIndex(int index) {
    long cPtr = ExtrasJNI.btWorldImporter_getBvhByIndex(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btOptimizedBvh(cPtr, false);
}
