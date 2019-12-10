@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_btConvex2dConvex2dAlgorithm_CreateFunc(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
