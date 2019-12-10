public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btBroadphaseRayCallback_change_ownership(this, swigCPtr, false);
}
