@Override
public void glTransformFeedbackVaryings(int program, String[] varyings, int bufferMode) {
    calls++;
    gl30.glTransformFeedbackVaryings(program, varyings, bufferMode);
    check();
}
