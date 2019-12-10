/**
 * Allocates all the require rendering resources like Renderables,Shaders,Meshes
 *  according to the current batch configuration.
 */
private void initRenderData() {
    setVertexData();
    clearRenderablesPool();
    allocShader();
    resetCapacity();
}
