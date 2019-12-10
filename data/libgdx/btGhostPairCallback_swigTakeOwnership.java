public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btGhostPairCallback_change_ownership(this, swigCPtr, true);
}
