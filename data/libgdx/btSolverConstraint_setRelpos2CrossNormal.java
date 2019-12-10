public void setRelpos2CrossNormal(btVector3 value) {
    DynamicsJNI.btSolverConstraint_relpos2CrossNormal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
