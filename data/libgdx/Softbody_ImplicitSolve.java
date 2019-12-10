public static float ImplicitSolve(btSoftBody.ImplicitFn fn, Vector3 a, Vector3 b, float accuracy) {
    return SoftbodyJNI.ImplicitSolve__SWIG_1(btSoftBody.ImplicitFn.getCPtr(fn), fn, a, b, accuracy);
}
