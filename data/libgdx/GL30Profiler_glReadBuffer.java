// GL30 Unique
@Override
public void glReadBuffer(int mode) {
    calls++;
    gl30.glReadBuffer(mode);
    check();
}
