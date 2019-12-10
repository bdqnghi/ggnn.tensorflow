public void glDeleteFramebuffers(int n, IntBuffer framebuffers) {
    GL.glDeleteFramebuffersEXT(n, framebuffers, getPosition(framebuffers));
}
