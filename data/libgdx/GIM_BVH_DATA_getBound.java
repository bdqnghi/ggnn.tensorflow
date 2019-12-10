public btAABB getBound() {
    long cPtr = CollisionJNI.GIM_BVH_DATA_bound_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btAABB(cPtr, false);
}
