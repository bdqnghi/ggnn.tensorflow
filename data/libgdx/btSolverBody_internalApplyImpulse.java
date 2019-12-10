public void internalApplyImpulse(Vector3 linearComponent, Vector3 angularComponent, float impulseMagnitude) {
    DynamicsJNI.btSolverBody_internalApplyImpulse(swigCPtr, this, linearComponent, angularComponent, impulseMagnitude);
}
