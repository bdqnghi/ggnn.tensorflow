public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btInternalTriangleIndexCallback_change_ownership(this, swigCPtr, true);
}
