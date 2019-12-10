@Override
public int glGenBuffer() {
    calls++;
    int result = gl20.glGenBuffer();
    check();
    return result;
}
