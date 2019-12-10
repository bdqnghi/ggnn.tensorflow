public void applyDImpulse(Vector3 impulse, Vector3 rpos) {
    SoftbodyJNI.btSoftBody_Body_applyDImpulse(swigCPtr, this, impulse, rpos);
}
