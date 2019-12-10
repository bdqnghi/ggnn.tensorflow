public void setAabbMinOrg(btVector3 value) {
    CollisionJNI.btOptimizedBvhNode_aabbMinOrg_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
