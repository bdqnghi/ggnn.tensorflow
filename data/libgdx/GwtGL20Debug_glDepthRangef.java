@Override
public void glDepthRangef(float zNear, float zFar) {
    super.glDepthRangef(zNear, zFar);
    checkError();
}
