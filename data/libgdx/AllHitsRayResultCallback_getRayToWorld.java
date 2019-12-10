public void getRayToWorld(Vector3 out) {
    CollisionJNI.AllHitsRayResultCallback_getRayToWorld(swigCPtr, this, out);
}
