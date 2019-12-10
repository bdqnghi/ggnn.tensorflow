@Override
public int glGenFramebuffer() {
    WebGLFramebuffer fb = gl.createFramebuffer();
    return allocateFrameBufferId(fb);
}
