@Override
public String glGetActiveUniformBlockName(int program, int uniformBlockIndex) {
    return GL31.glGetActiveUniformBlockName(program, uniformBlockIndex, 1024);
}
