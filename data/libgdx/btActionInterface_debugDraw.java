public void debugDraw(btIDebugDraw debugDrawer) {
    DynamicsJNI.btActionInterface_debugDraw(swigCPtr, this, btIDebugDraw.getCPtr(debugDrawer), debugDrawer);
}
