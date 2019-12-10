private int allocateRenderBufferId(WebGLRenderbuffer renderBuffer) {
    int id = nextRenderBufferId++;
    renderBuffers.put(id, renderBuffer);
    return id;
}
