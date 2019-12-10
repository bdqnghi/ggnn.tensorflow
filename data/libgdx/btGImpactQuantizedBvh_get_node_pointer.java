public BT_QUANTIZED_BVH_NODE get_node_pointer() {
    long cPtr = CollisionJNI.btGImpactQuantizedBvh_get_node_pointer__SWIG_1(swigCPtr, this);
    return (cPtr == 0) ? null : new BT_QUANTIZED_BVH_NODE(cPtr, false);
}
