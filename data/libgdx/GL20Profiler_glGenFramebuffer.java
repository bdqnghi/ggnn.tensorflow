@Override
public int glGenFramebuffer() {
    calls++;
    int result = gl20.glGenFramebuffer();
    check();
    return result;
}
