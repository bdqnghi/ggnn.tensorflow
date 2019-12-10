public float getNonDiagonal(btJacobianEntry jacB, float massInvA, float massInvB) {
    return DynamicsJNI.btJacobianEntry_getNonDiagonal__SWIG_1(swigCPtr, this, btJacobianEntry.getCPtr(jacB), jacB, massInvA, massInvB);
}
