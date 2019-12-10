public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btTriangleCallback_change_ownership(this, swigCPtr, true);
}
