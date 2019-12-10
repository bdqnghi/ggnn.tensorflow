@Override
public void glDeleteRenderbuffers(int n, IntBuffer renderbuffers) {
    calls++;
    gl30.glDeleteRenderbuffers(n, renderbuffers);
    check();
}
