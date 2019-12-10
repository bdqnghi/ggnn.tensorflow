public void setRigidBody(btRigidBodyFloatData value) {
    SoftbodyJNI.SoftRigidAnchorData_rigidBody_set(swigCPtr, this, btRigidBodyFloatData.getCPtr(value), value);
}
