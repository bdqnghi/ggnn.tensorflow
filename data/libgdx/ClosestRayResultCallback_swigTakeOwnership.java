public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ClosestRayResultCallback_change_ownership(this, swigCPtr, true);
}
