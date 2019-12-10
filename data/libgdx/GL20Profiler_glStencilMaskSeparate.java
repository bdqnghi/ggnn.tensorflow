@Override
public void glStencilMaskSeparate(int face, int mask) {
    calls++;
    gl20.glStencilMaskSeparate(face, mask);
    check();
}
