@Override
public void glDepthRangef(float zNear, float zFar) {
    calls++;
    gl30.glDepthRangef(zNear, zFar);
    check();
}
