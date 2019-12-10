public void reportFailure(int errNo, int numIterations) {
    CollisionJNI.btConvexCast_CastResult_reportFailure(swigCPtr, this, errNo, numIterations);
}
