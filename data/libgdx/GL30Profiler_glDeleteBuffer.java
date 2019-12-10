@Override
public void glDeleteBuffer(int buffer) {
    calls++;
    gl30.glDeleteBuffer(buffer);
    check();
}
