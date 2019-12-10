@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_GIM_BVH_TREE_NODE(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
