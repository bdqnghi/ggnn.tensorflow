public void setVelocity(Vector3 velocity) {
    SoftbodyJNI.btSoftBody_setVelocity(swigCPtr, this, velocity);
}
