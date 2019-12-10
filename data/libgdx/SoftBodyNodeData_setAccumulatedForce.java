public void setAccumulatedForce(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyNodeData_accumulatedForce_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
