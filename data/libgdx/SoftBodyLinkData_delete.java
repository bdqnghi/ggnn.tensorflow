@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            SoftbodyJNI.delete_SoftBodyLinkData(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
