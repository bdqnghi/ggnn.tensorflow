@Override
public void glColorMask(boolean red, boolean green, boolean blue, boolean alpha) {
    calls++;
    gl20.glColorMask(red, green, blue, alpha);
    check();
}
