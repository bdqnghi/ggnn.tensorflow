public void applyImpulse(btSoftBody.Impulse impulse, Vector3 rpos) {
    SoftbodyJNI.btSoftBody_Body_applyImpulse(swigCPtr, this, btSoftBody.Impulse.getCPtr(impulse), impulse, rpos);
}
