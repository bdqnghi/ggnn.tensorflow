@Override
public int glGetUniformBlockIndex(int program, String uniformBlockName) {
    calls++;
    final int result = gl30.glGetUniformBlockIndex(program, uniformBlockName);
    check();
    return result;
}
