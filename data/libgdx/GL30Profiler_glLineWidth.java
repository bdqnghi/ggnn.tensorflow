@Override
public void glLineWidth(float width) {
    calls++;
    gl30.glLineWidth(width);
    check();
}
