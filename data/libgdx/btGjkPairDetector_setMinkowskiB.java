public void setMinkowskiB(btConvexShape minkB) {
    CollisionJNI.btGjkPairDetector_setMinkowskiB(swigCPtr, this, btConvexShape.getCPtr(minkB), minkB);
}
