public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btBroadphaseAabbCallback_change_ownership(this, swigCPtr, false);
}
