@Override
public void glDeleteBuffer(int buffer) {
    calls++;
    gl20.glDeleteBuffer(buffer);
    check();
}
