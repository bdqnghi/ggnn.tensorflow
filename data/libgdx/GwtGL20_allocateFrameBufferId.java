private int allocateFrameBufferId(WebGLFramebuffer frameBuffer) {
    int id = nextBufferId++;
    frameBuffers.put(id, frameBuffer);
    return id;
}
