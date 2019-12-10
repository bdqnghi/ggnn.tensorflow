@Override
public void glBindAttribLocation(int program, int index, String name) {
    calls++;
    gl20.glBindAttribLocation(program, index, name);
    check();
}
