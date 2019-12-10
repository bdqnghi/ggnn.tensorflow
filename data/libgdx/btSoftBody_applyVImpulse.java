public void applyVImpulse(Vector3 impulse, Vector3 rpos) {
    SoftbodyJNI.btSoftBody_Body_applyVImpulse(swigCPtr, this, impulse, rpos);
}
