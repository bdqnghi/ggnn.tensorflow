@Override
public void glStencilFunc(int func, int ref, int mask) {
    super.glStencilFunc(func, ref, mask);
    checkError();
}
