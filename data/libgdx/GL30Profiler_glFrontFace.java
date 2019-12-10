@Override
public void glFrontFace(int mode) {
    calls++;
    gl30.glFrontFace(mode);
    check();
}
