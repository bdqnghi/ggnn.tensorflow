public void applyImpulse(Vector3 linearComponent, Vector3 angularComponent, float impulseMagnitude) {
    DynamicsJNI.btSolverBody_applyImpulse(swigCPtr, this, linearComponent, angularComponent, impulseMagnitude);
}
