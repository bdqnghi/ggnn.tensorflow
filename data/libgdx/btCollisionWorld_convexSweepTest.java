public void convexSweepTest(btConvexShape castShape, Matrix4 from, Matrix4 to, ConvexResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_convexSweepTest__SWIG_1(swigCPtr, this, btConvexShape.getCPtr(castShape), castShape, from, to, ConvexResultCallback.getCPtr(resultCallback), resultCallback);
}
