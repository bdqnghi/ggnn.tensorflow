public void setPreviousPosition(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyNodeData_previousPosition_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
