public void setNormal(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyNodeData_normal_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
