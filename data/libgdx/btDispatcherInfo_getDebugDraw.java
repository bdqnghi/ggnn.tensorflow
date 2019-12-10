public btIDebugDraw getDebugDraw() {
    long cPtr = CollisionJNI.btDispatcherInfo_debugDraw_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btIDebugDraw(cPtr, false);
}
