@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_btGjkEpaSolver2_sResults(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
