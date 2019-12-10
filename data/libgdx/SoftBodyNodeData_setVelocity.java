public void setVelocity(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyNodeData_velocity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
