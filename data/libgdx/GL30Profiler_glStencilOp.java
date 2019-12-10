@Override
public void glStencilOp(int fail, int zfail, int zpass) {
    calls++;
    gl30.glStencilOp(fail, zfail, zpass);
    check();
}
