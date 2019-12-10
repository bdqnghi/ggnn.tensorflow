@Override
public void glGetUniformIndices(int program, String[] uniformNames, IntBuffer uniformIndices) {
    calls++;
    gl30.glGetUniformIndices(program, uniformNames, uniformIndices);
    check();
}
