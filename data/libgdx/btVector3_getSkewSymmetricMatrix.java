public void getSkewSymmetricMatrix(btVector3 v0, btVector3 v1, btVector3 v2) {
    LinearMathJNI.btVector3_getSkewSymmetricMatrix(swigCPtr, this, btVector3.getCPtr(v0), v0, btVector3.getCPtr(v1), v1, btVector3.getCPtr(v2), v2);
}
