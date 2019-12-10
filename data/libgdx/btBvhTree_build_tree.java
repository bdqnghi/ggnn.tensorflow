public void build_tree(GIM_BVH_DATA_ARRAY primitive_boxes) {
    CollisionJNI.btBvhTree_build_tree(swigCPtr, this, GIM_BVH_DATA_ARRAY.getCPtr(primitive_boxes), primitive_boxes);
}
