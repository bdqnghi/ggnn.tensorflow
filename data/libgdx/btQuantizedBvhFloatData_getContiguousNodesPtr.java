public btOptimizedBvhNodeFloatData getContiguousNodesPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_contiguousNodesPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btOptimizedBvhNodeFloatData(cPtr, false);
}
