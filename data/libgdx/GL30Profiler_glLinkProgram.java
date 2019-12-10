@Override
public void glLinkProgram(int program) {
    calls++;
    gl30.glLinkProgram(program);
    check();
}
