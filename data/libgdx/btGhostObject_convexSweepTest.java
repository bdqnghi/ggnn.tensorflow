public void convexSweepTest(btConvexShape castShape, Matrix4 convexFromWorld, Matrix4 convexToWorld, ConvexResultCallback resultCallback) {
    CollisionJNI.btGhostObject_convexSweepTest__SWIG_1(swigCPtr, this, btConvexShape.getCPtr(castShape), castShape, convexFromWorld, convexToWorld, ConvexResultCallback.getCPtr(resultCallback), resultCallback);
}
