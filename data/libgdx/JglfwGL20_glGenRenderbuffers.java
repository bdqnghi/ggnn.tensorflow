public void glGenRenderbuffers(int n, IntBuffer renderbuffers) {
    GL.glGenRenderbuffersEXT(n, renderbuffers, getPosition(renderbuffers));
}
