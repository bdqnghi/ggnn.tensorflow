@Override
public void glFramebufferRenderbuffer(int target, int attachment, int renderbuffertarget, int renderbuffer) {
    calls++;
    gl30.glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
    check();
}
