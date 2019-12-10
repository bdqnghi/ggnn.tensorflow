public void getRayFromWorld(Vector3 out) {
    CollisionJNI.AllHitsRayResultCallback_getRayFromWorld(swigCPtr, this, out);
}
