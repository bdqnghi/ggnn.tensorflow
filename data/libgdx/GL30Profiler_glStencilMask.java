@Override
public void glStencilMask(int mask) {
    calls++;
    gl30.glStencilMask(mask);
    check();
}
