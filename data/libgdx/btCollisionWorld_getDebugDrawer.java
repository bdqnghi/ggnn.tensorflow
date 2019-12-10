public btIDebugDraw getDebugDrawer() {
    long cPtr = CollisionJNI.btCollisionWorld_getDebugDrawer(swigCPtr, this);
    return (cPtr == 0) ? null : new btIDebugDraw(cPtr, false);
}
