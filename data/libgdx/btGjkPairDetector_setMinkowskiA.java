public void setMinkowskiA(btConvexShape minkA) {
    CollisionJNI.btGjkPairDetector_setMinkowskiA(swigCPtr, this, btConvexShape.getCPtr(minkA), minkA);
}
