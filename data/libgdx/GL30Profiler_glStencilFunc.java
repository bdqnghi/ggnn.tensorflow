@Override
public void glStencilFunc(int func, int ref, int mask) {
    calls++;
    gl30.glStencilFunc(func, ref, mask);
    check();
}
