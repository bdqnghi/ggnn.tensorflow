@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            CollisionJNI.delete_btBox2dBox2dCollisionAlgorithm_CreateFunc(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
