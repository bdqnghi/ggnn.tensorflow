@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            LinearMathJNI.delete_btVector3Array_less(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
