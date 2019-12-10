public void glDeleteRenderbuffers(int n, IntBuffer renderbuffers) {
    GL.glDeleteRenderbuffersEXT(n, renderbuffers, getPosition(renderbuffers));
}
