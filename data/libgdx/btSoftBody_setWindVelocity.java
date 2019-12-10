public void setWindVelocity(Vector3 velocity) {
    SoftbodyJNI.btSoftBody_setWindVelocity(swigCPtr, this, velocity);
}
