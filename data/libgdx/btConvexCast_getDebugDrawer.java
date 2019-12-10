public btIDebugDraw getDebugDrawer() {
    long cPtr = CollisionJNI.btConvexCast_CastResult_debugDrawer_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btIDebugDraw(cPtr, false);
}
