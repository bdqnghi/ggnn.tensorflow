@Override
public void glDepthRangef(float zNear, float zFar) {
    calls++;
    gl20.glDepthRangef(zNear, zFar);
    check();
}
