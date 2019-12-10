@Override
public int glGenBuffer() {
    calls++;
    int result = gl30.glGenBuffer();
    check();
    return result;
}
