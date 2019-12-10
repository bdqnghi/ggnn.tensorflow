@Override
public void glStencilFuncSeparate(int face, int func, int ref, int mask) {
    calls++;
    gl30.glStencilFuncSeparate(face, func, ref, mask);
    check();
}
