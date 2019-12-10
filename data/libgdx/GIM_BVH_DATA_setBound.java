public void setBound(btAABB value) {
    CollisionJNI.GIM_BVH_DATA_bound_set(swigCPtr, this, btAABB.getCPtr(value), value);
}
