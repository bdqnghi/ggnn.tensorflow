public btOptimizedBvhNodeDoubleData getContiguousNodesPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_contiguousNodesPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btOptimizedBvhNodeDoubleData(cPtr, false);
}
