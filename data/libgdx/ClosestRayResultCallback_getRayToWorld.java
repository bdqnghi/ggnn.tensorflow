public void getRayToWorld(Vector3 out) {
    CollisionJNI.ClosestRayResultCallback_getRayToWorld(swigCPtr, this, out);
}
