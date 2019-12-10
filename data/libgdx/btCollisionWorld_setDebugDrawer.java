public void setDebugDrawer(btIDebugDraw debugDrawer) {
    CollisionJNI.btCollisionWorld_setDebugDrawer(swigCPtr, this, btIDebugDraw.getCPtr(debugDrawer), debugDrawer);
}
