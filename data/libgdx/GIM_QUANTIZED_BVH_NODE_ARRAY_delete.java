@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_GIM_QUANTIZED_BVH_NODE_ARRAY(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
