public void applyDAImpulse(Vector3 impulse) {
    SoftbodyJNI.btSoftBody_Body_applyDAImpulse(swigCPtr, this, impulse);
}
