/**
 * Will reset the statistical information which has been collected so far. This should be called after every frame.
 * Error listener is kept as it is.
 */
public static void reset() {
    calls = 0;
    textureBindings = 0;
    drawCalls = 0;
    shaderSwitches = 0;
    vertexCount.reset();
}
