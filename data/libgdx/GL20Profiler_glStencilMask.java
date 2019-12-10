@Override
public void glStencilMask(int mask) {
    calls++;
    gl20.glStencilMask(mask);
    check();
}
