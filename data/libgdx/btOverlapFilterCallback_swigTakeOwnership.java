public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btOverlapFilterCallback_change_ownership(this, swigCPtr, true);
}
