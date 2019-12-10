@Override
public void glDeleteRenderbuffers(int n, IntBuffer renderbuffers) {
    calls++;
    gl20.glDeleteRenderbuffers(n, renderbuffers);
    check();
}
