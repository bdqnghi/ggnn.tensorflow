@Override
public void glStencilOpSeparate(int face, int fail, int zfail, int zpass) {
    calls++;
    gl30.glStencilOpSeparate(face, fail, zfail, zpass);
    check();
}
