@Override
public int glGenTexture() {
    calls++;
    int result = gl30.glGenTexture();
    check();
    return result;
}
