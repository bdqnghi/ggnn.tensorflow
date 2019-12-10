public void setBound(btAABB value) {
    CollisionJNI.GIM_BVH_TREE_NODE_bound_set(swigCPtr, this, btAABB.getCPtr(value), value);
}
