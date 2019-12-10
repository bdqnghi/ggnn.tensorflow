@Override
public void glStencilFuncSeparate(int face, int func, int ref, int mask) {
    super.glStencilFuncSeparate(face, func, ref, mask);
    checkError();
}
