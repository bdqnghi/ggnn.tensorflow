public LocalShapeInfo getLocalShapeInfo() {
    long cPtr = CollisionJNI.LocalConvexResult_localShapeInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new LocalShapeInfo(cPtr, false);
}
