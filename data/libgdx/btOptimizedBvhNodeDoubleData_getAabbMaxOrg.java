public btVector3DoubleData getAabbMaxOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNodeDoubleData_aabbMaxOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
