@Override
public void glBindAttribLocation(int program, int index, String name) {
    calls++;
    gl30.glBindAttribLocation(program, index, name);
    check();
}
