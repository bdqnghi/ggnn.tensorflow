@Override
public void glStencilMaskSeparate(int face, int mask) {
    calls++;
    gl30.glStencilMaskSeparate(face, mask);
    check();
}
