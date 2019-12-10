public btQuantizedBvhNodeData getQuantizedContiguousNodesPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_quantizedContiguousNodesPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btQuantizedBvhNodeData(cPtr, false);
}
