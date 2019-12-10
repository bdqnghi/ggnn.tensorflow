@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            DynamicsJNI.delete_btRigidBody_btRigidBodyConstructionInfo(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
