@Override
public int glGenRenderbuffer() {
    calls++;
    int result = gl30.glGenRenderbuffer();
    check();
    return result;
}
