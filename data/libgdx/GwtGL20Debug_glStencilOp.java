@Override
public void glStencilOp(int fail, int zfail, int zpass) {
    super.glStencilOp(fail, zfail, zpass);
    checkError();
}
