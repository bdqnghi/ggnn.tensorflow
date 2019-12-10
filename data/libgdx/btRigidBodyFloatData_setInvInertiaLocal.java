public void setInvInertiaLocal(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_invInertiaLocal_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
