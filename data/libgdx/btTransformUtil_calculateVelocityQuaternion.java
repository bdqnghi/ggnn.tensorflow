public static void calculateVelocityQuaternion(Vector3 pos0, Vector3 pos1, Quaternion orn0, Quaternion orn1, float timeStep, Vector3 linVel, Vector3 angVel) {
    LinearMathJNI.btTransformUtil_calculateVelocityQuaternion(pos0, pos1, orn0, orn1, timeStep, linVel, angVel);
}
