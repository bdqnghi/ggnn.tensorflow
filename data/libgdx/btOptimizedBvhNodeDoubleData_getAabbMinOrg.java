public btVector3DoubleData getAabbMinOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNodeDoubleData_aabbMinOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
