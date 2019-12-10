@Override
public void glGenRenderbuffers(int n, IntBuffer renderbuffers) {
    super.glGenRenderbuffers(n, renderbuffers);
    checkError();
}
