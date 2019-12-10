public void setAJ(btVector3 value) {
    DynamicsJNI.btJacobianEntry_aJ_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
