public void setBody(btRigidBody value) {
    SoftbodyJNI.btSoftBody_Anchor_body_set(swigCPtr, this, btRigidBody.getCPtr(value), value);
}
