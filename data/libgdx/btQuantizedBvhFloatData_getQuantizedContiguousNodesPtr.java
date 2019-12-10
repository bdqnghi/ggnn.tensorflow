public btQuantizedBvhNodeData getQuantizedContiguousNodesPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_quantizedContiguousNodesPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btQuantizedBvhNodeData(cPtr, false);
}
