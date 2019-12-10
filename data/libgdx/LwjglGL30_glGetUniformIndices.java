@Override
public void glGetUniformIndices(int program, String[] uniformNames, IntBuffer uniformIndices) {
    GL31.glGetUniformIndices(program, uniformNames, uniformIndices);
}
