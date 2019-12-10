public void applyAImpulse(btSoftBody.Impulse impulse) {
    SoftbodyJNI.btSoftBody_Body_applyAImpulse(swigCPtr, this, btSoftBody.Impulse.getCPtr(impulse), impulse);
}
