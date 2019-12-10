@Override
public void glDeleteFramebuffers(int n, IntBuffer framebuffers) {
    for (int i = 0; i < n; i++) {
        int id = framebuffers.get();
        WebGLFramebuffer fb = this.frameBuffers.get(id);
        deallocateFrameBufferId(id);
        gl.deleteFramebuffer(fb);
    }
}
