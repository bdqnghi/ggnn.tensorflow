public static void calculateVelocity(Matrix4 transform0, Matrix4 transform1, float timeStep, Vector3 linVel, Vector3 angVel) {
    LinearMathJNI.btTransformUtil_calculateVelocity(transform0, transform1, timeStep, linVel, angVel);
}
