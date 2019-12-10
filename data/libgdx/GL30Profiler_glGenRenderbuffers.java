@Override
public void glGenRenderbuffers(int n, IntBuffer renderbuffers) {
    calls++;
    gl30.glGenRenderbuffers(n, renderbuffers);
    check();
}
