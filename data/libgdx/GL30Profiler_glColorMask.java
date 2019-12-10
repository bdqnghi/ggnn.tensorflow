@Override
public void glColorMask(boolean red, boolean green, boolean blue, boolean alpha) {
    calls++;
    gl30.glColorMask(red, green, blue, alpha);
    check();
}
