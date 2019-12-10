@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_btStaticPlaneShapeData(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
