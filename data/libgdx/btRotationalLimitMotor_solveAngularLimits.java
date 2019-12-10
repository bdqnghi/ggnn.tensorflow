public float solveAngularLimits(float timeStep, Vector3 axis, float jacDiagABInv, btRigidBody body0, btRigidBody body1) {
    return DynamicsJNI.btRotationalLimitMotor_solveAngularLimits(swigCPtr, this, timeStep, axis, jacDiagABInv, btRigidBody.getCPtr(body0), body0, btRigidBody.getCPtr(body1), body1);
}
