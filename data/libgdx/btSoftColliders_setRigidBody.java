public void setRigidBody(btRigidBody value) {
    SoftbodyJNI.btSoftColliders_CollideSDF_RS_rigidBody_set(swigCPtr, this, btRigidBody.getCPtr(value), value);
}
