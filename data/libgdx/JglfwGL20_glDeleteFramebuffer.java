public void glDeleteFramebuffer(int framebuffer) {
    glDeleteFramebuffers(1, toIntBuffer(framebuffer));
}
