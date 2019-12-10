public void setDebugMode(final int mode) {
    if (mode == btIDebugDraw.DebugDrawModes.DBG_NoDebug && debugDrawer == null)
        return;
    if (debugDrawer == null)
        collisionWorld.setDebugDrawer(debugDrawer = new DebugDrawer());
    debugDrawer.setDebugMode(mode);
}
