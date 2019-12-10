// @Override
// public void glGetVertexAttribIuiv(int index, int pname, int[] params, int offset) {
// GLES30.glGetVertexAttribIuiv(index, pname, params, offset);
// }
@Override
public void glGetVertexAttribIuiv(int index, int pname, java.nio.IntBuffer params) {
    GLES30.glGetVertexAttribIuiv(index, pname, params);
}
