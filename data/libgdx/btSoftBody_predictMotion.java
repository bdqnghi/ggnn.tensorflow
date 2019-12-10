public void predictMotion(float dt) {
    SoftbodyJNI.btSoftBody_predictMotion(swigCPtr, this, dt);
}
