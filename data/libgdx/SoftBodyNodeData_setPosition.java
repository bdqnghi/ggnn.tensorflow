public void setPosition(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyNodeData_position_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
