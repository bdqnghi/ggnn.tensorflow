public void toggleDebugMode() {
    if (world.getDebugMode() == DebugDrawModes.DBG_NoDebug)
        setDebugMode(DebugDrawModes.DBG_DrawWireframe | DebugDrawModes.DBG_DrawFeaturesText | DebugDrawModes.DBG_DrawText | DebugDrawModes.DBG_DrawContactPoints);
    else if (world.renderMeshes)
        world.renderMeshes = false;
    else {
        world.renderMeshes = true;
        setDebugMode(DebugDrawModes.DBG_NoDebug);
    }
}
