public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ClosestConvexResultCallback_change_ownership(this, swigCPtr, true);
}
