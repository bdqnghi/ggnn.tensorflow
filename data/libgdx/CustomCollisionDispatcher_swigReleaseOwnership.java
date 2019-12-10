public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.CustomCollisionDispatcher_change_ownership(this, swigCPtr, false);
}
