@Override
public void glStencilOp(int fail, int zfail, int zpass) {
    calls++;
    gl20.glStencilOp(fail, zfail, zpass);
    check();
}
