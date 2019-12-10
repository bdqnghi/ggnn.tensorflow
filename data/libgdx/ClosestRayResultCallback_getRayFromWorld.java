public void getRayFromWorld(Vector3 out) {
    CollisionJNI.ClosestRayResultCallback_getRayFromWorld(swigCPtr, this, out);
}
