public void setBJ(btVector3 value) {
    DynamicsJNI.btJacobianEntry_bJ_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
