@Override
public void glGenRenderbuffers(int n, IntBuffer renderbuffers) {
    calls++;
    gl20.glGenRenderbuffers(n, renderbuffers);
    check();
}
