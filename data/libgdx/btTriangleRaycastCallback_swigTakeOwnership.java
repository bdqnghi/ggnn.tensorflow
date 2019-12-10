public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.btTriangleRaycastCallback_change_ownership(this, swigCPtr, true);
}
