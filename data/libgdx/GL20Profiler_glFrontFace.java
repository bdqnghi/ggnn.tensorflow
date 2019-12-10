@Override
public void glFrontFace(int mode) {
    calls++;
    gl20.glFrontFace(mode);
    check();
}
