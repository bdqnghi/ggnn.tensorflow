public btOptimizedBvh createOptimizedBvh() {
    long cPtr = ExtrasJNI.btWorldImporter_createOptimizedBvh(swigCPtr, this);
    return (cPtr == 0) ? null : new btOptimizedBvh(cPtr, false);
}
