// @Override
// public void glVertexAttribI4iv(int index, int[] v, int offset) {
// GLES30.glVertexAttribI4iv(index, v, offset);
// }
// 
// @Override
// public void glVertexAttribI4iv(int index, java.nio.IntBuffer v) {
// GLES30.glVertexAttribI4iv(index, v);
// }
// 
// @Override
// public void glVertexAttribI4uiv(int index, int[] v, int offset) {
// GLES30.glVertexAttribI4uiv(index, v, offset);
// }
// 
// @Override
// public void glVertexAttribI4uiv(int index, java.nio.IntBuffer v) {
// GLES30.glVertexAttribI4uiv(index, v);
// }
// 
// @Override
// public void glGetUniformuiv(int program, int location, int[] params, int offset) {
// GLES30.glGetUniformuiv(program, location, params, offset);
// }
@Override
public void glGetUniformuiv(int program, int location, java.nio.IntBuffer params) {
    GLES30.glGetUniformuiv(program, location, params);
}
