@Override
public boolean glIsRenderbuffer(int renderbuffer) {
    calls++;
    boolean result = gl20.glIsRenderbuffer(renderbuffer);
    check();
    return result;
}
