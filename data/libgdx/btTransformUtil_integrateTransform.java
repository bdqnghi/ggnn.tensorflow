public static void integrateTransform(Matrix4 curTrans, Vector3 linvel, Vector3 angvel, float timeStep, Matrix4 predictedTransform) {
    LinearMathJNI.btTransformUtil_integrateTransform(curTrans, linvel, angvel, timeStep, predictedTransform);
}
