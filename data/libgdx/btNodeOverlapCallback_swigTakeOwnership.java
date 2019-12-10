public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btNodeOverlapCallback_change_ownership(this, swigCPtr, true);
}
