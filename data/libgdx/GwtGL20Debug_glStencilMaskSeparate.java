@Override
public void glStencilMaskSeparate(int face, int mask) {
    super.glStencilMaskSeparate(face, mask);
    checkError();
}
