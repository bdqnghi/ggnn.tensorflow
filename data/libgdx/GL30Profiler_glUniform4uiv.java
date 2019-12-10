@Override
public void glUniform4uiv(int location, int count, IntBuffer value) {
    calls++;
    gl30.glUniform4uiv(location, count, value);
    check();
}
