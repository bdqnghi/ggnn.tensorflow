@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_btStaticPlaneShape(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
