public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btTriangleConvexcastCallback_change_ownership(this, swigCPtr, true);
}
