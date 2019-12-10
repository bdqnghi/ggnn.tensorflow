public void setInvInertiaLocal(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_invInertiaLocal_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
