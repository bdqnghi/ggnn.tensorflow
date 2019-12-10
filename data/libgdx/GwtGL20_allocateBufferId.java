private int allocateBufferId(WebGLBuffer buffer) {
    int id = nextBufferId++;
    buffers.put(id, buffer);
    return id;
}
