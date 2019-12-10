@Override
public void glLineWidth(float width) {
    calls++;
    gl20.glLineWidth(width);
    check();
}
