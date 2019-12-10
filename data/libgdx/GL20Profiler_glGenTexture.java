@Override
public int glGenTexture() {
    calls++;
    int result = gl20.glGenTexture();
    check();
    return result;
}
