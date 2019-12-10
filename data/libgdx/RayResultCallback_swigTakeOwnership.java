public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.RayResultCallback_change_ownership(this, swigCPtr, true);
}
