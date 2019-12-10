public static void solveCommonConstraints(SWIGTYPE_p_p_btSoftBody bodies, int count, int iterations) {
    SoftbodyJNI.btSoftBody_solveCommonConstraints(SWIGTYPE_p_p_btSoftBody.getCPtr(bodies), count, iterations);
}
