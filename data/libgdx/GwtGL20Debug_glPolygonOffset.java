@Override
public void glPolygonOffset(float factor, float units) {
    super.glPolygonOffset(factor, units);
    checkError();
}
