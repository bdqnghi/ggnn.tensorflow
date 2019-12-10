@Override
public void glStencilFunc(int func, int ref, int mask) {
    calls++;
    gl20.glStencilFunc(func, ref, mask);
    check();
}
