@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            ExtrasJNI.delete_btStringArray_less(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
