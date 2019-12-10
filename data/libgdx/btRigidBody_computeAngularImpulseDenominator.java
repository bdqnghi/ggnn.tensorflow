public float computeAngularImpulseDenominator(Vector3 axis) {
    return DynamicsJNI.btRigidBody_computeAngularImpulseDenominator(swigCPtr, this, axis);
}
