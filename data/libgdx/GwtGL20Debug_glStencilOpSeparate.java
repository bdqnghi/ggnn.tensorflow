@Override
public void glStencilOpSeparate(int face, int fail, int zfail, int zpass) {
    super.glStencilOpSeparate(face, fail, zfail, zpass);
    checkError();
}
