public void getAngularVelocity(Vector3 angVel) {
    DynamicsJNI.btSolverBody_getAngularVelocity(swigCPtr, this, angVel);
}
