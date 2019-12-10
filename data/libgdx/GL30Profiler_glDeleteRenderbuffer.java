@Override
public void glDeleteRenderbuffer(int renderbuffer) {
    calls++;
    gl30.glDeleteRenderbuffer(renderbuffer);
    check();
}
