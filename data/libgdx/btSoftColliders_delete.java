@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            SoftbodyJNI.delete_btSoftColliders_CollideVF_SS(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
