public void setLinearJointAxis(btVector3 value) {
    DynamicsJNI.btJacobianEntry_linearJointAxis_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
