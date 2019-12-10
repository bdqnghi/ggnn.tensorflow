public void setAabbMaxOrg(btVector3 value) {
    CollisionJNI.btOptimizedBvhNode_aabbMaxOrg_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
