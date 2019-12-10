public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.CustomCollisionDispatcher_change_ownership(this, swigCPtr, true);
}
