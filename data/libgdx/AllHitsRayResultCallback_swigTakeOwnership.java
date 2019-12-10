public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.AllHitsRayResultCallback_change_ownership(this, swigCPtr, true);
}
