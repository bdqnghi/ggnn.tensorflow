public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ClosestRayResultCallback_change_ownership(this, swigCPtr, false);
}
