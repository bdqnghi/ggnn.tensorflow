@Override
public void glStencilFuncSeparate(int face, int func, int ref, int mask) {
    calls++;
    gl20.glStencilFuncSeparate(face, func, ref, mask);
    check();
}
