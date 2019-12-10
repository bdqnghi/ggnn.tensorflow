// @Override
// public void glGetVertexAttribIiv(int index, int pname, int[] params, int offset) {
// GLES30.glGetVertexAttribIiv(index, pname, params, offset);
// }
@Override
public void glGetVertexAttribIiv(int index, int pname, java.nio.IntBuffer params) {
    GLES30.glGetVertexAttribIiv(index, pname, params);
}
