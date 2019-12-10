@Override
public void glColorMask(boolean red, boolean green, boolean blue, boolean alpha) {
    super.glColorMask(red, green, blue, alpha);
    checkError();
}
