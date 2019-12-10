public btVector3FloatData getAabbMinOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNodeFloatData_aabbMinOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
