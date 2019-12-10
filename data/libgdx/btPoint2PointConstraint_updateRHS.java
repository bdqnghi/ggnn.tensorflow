public void updateRHS(float timeStep) {
    DynamicsJNI.btPoint2PointConstraint_updateRHS(swigCPtr, this, timeStep);
}
