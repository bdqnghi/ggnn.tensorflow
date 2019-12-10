@Override
public void glLinkProgram(int program) {
    calls++;
    gl20.glLinkProgram(program);
    check();
}
