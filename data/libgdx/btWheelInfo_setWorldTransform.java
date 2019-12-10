public void setWorldTransform(btTransform value) {
    DynamicsJNI.btWheelInfo_worldTransform_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
