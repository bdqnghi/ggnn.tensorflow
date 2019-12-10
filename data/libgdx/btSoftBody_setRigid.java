public void setRigid(btRigidBody value) {
    SoftbodyJNI.btSoftBody_Body_rigid_set(swigCPtr, this, btRigidBody.getCPtr(value), value);
}
