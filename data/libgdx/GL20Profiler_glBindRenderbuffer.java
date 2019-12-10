@Override
public void glBindRenderbuffer(int target, int renderbuffer) {
    calls++;
    gl20.glBindRenderbuffer(target, renderbuffer);
    check();
}
