public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btBroadphaseRayCallback_change_ownership(this, swigCPtr, true);
}
