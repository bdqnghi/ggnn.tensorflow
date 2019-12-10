public btBvhSubtreeInfoData getSubTreeInfoPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_subTreeInfoPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBvhSubtreeInfoData(cPtr, false);
}
