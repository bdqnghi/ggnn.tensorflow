public float computeImpulseDenominator(Vector3 pos, Vector3 normal) {
    return DynamicsJNI.btRigidBody_computeImpulseDenominator(swigCPtr, this, pos, normal);
}
