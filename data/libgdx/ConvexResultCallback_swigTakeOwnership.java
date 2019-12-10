public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ConvexResultCallback_change_ownership(this, swigCPtr, true);
}
