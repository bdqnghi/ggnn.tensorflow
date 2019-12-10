public btVector3 getLinearJointAxis() {
    long cPtr = DynamicsJNI.btJacobianEntry_linearJointAxis_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
