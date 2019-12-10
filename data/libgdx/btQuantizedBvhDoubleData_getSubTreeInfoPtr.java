public btBvhSubtreeInfoData getSubTreeInfoPtr() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_subTreeInfoPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBvhSubtreeInfoData(cPtr, false);
}
