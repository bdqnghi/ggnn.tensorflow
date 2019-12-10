public btVector3 getAabbMaxOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNode_aabbMaxOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
