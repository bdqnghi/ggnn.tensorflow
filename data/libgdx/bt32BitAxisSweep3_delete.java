@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_bt32BitAxisSweep3(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
