@Override
public int glGenFramebuffer() {
    calls++;
    int result = gl30.glGenFramebuffer();
    check();
    return result;
}
