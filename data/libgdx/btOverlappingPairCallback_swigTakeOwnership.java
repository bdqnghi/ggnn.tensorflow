public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btOverlappingPairCallback_change_ownership(this, swigCPtr, true);
}
