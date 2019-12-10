@Override
public int glGenRenderbuffer() {
    calls++;
    int result = gl20.glGenRenderbuffer();
    check();
    return result;
}
