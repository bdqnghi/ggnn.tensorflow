@Override
public void glPixelStorei(int pname, int param) {
    calls++;
    gl20.glPixelStorei(pname, param);
    check();
}
