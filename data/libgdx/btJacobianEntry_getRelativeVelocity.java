public float getRelativeVelocity(Vector3 linvelA, Vector3 angvelA, Vector3 linvelB, Vector3 angvelB) {
    return DynamicsJNI.btJacobianEntry_getRelativeVelocity(swigCPtr, this, linvelA, angvelA, linvelB, angvelB);
}
