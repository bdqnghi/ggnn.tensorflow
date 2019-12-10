@Override
public String glGetActiveUniformBlockName(int program, int uniformBlockIndex) {
    calls++;
    final String result = gl30.glGetActiveUniformBlockName(program, uniformBlockIndex);
    check();
    return result;
}
