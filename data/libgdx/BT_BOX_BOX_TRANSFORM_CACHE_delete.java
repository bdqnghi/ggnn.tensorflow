@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_BT_BOX_BOX_TRANSFORM_CACHE(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
