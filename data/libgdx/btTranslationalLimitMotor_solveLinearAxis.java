public float solveLinearAxis(float timeStep, float jacDiagABInv, btRigidBody body1, Vector3 pointInA, btRigidBody body2, Vector3 pointInB, int limit_index, Vector3 axis_normal_on_a, Vector3 anchorPos) {
    return DynamicsJNI.btTranslationalLimitMotor_solveLinearAxis(swigCPtr, this, timeStep, jacDiagABInv, btRigidBody.getCPtr(body1), body1, pointInA, btRigidBody.getCPtr(body2), body2, pointInB, limit_index, axis_normal_on_a, anchorPos);
}
