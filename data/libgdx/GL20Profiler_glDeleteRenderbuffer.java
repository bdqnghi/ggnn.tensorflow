@Override
public void glDeleteRenderbuffer(int renderbuffer) {
    calls++;
    gl20.glDeleteRenderbuffer(renderbuffer);
    check();
}
