public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btOverlapCallback_change_ownership(this, swigCPtr, true);
}
