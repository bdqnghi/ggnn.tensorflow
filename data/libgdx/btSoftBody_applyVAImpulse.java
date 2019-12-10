public void applyVAImpulse(Vector3 impulse) {
    SoftbodyJNI.btSoftBody_Body_applyVAImpulse(swigCPtr, this, impulse);
}
