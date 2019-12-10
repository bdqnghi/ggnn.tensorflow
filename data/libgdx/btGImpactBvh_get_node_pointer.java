public GIM_BVH_TREE_NODE get_node_pointer() {
    long cPtr = CollisionJNI.btGImpactBvh_get_node_pointer__SWIG_1(swigCPtr, this);
    return (cPtr == 0) ? null : new GIM_BVH_TREE_NODE(cPtr, false);
}
