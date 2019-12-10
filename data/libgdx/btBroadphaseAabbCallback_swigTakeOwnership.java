public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btBroadphaseAabbCallback_change_ownership(this, swigCPtr, true);
}
