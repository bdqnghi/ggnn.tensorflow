public void glGenFramebuffers(int n, IntBuffer framebuffers) {
    GL.glGenFramebuffersEXT(n, framebuffers, getPosition(framebuffers));
}
