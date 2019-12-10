@Override
public boolean glIsRenderbuffer(int renderbuffer) {
    boolean res = super.glIsRenderbuffer(renderbuffer);
    checkError();
    return res;
}
