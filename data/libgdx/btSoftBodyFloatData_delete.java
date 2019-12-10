@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            SoftbodyJNI.delete_btSoftBodyFloatData(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
