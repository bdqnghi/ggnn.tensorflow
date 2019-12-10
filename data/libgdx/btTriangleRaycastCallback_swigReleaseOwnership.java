public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btTriangleRaycastCallback_change_ownership(this, swigCPtr, false);
}
