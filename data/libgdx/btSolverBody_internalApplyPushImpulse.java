public void internalApplyPushImpulse(Vector3 linearComponent, Vector3 angularComponent, float impulseMagnitude) {
    DynamicsJNI.btSolverBody_internalApplyPushImpulse(swigCPtr, this, linearComponent, angularComponent, impulseMagnitude);
}
