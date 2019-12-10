public btVector3FloatData getAabbMaxOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNodeFloatData_aabbMaxOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
