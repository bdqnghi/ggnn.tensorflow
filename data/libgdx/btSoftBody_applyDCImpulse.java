public void applyDCImpulse(Vector3 impulse) {
    SoftbodyJNI.btSoftBody_Body_applyDCImpulse(swigCPtr, this, impulse);
}
