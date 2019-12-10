public void setGravity(btVector3FloatData value) {
    DynamicsJNI.btDynamicsWorldFloatData_gravity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
