@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_BT_QUANTIZED_BVH_NODE(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
