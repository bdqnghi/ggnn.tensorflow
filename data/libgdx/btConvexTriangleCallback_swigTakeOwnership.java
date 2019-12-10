public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btConvexTriangleCallback_change_ownership(this, swigCPtr, true);
}
