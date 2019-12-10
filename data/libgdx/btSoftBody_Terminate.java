public void Terminate(float dt) {
    SoftbodyJNI.btSoftBody_Joint_Terminate(swigCPtr, this, dt);
}
