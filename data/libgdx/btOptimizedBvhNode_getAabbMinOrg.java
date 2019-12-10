public btVector3 getAabbMinOrg() {
    long cPtr = CollisionJNI.btOptimizedBvhNode_aabbMinOrg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
