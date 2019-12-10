@Override
public boolean glIsRenderbuffer(int renderbuffer) {
    calls++;
    boolean result = gl30.glIsRenderbuffer(renderbuffer);
    check();
    return result;
}
