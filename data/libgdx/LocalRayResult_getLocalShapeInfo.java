public LocalShapeInfo getLocalShapeInfo() {
    long cPtr = CollisionJNI.LocalRayResult_localShapeInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new LocalShapeInfo(cPtr, false);
}
