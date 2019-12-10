// 
// @Override
// public void glGetActiveUniformBlockiv(int program, int uniformBlockIndex, int pname, int[] params, int offset) {
// GLES30.glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params, offset);
// }
@Override
public void glGetActiveUniformBlockiv(int program, int uniformBlockIndex, int pname, java.nio.IntBuffer params) {
    GLES30.glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
