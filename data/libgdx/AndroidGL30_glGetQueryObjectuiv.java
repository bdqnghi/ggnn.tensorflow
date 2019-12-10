// @Override
// public void glGetQueryObjectuiv(int id, int pname, int[] params, int offset) {
// GLES30.glGetQueryObjectuiv(id, pname, params, offset);
// }
@Override
public void glGetQueryObjectuiv(int id, int pname, java.nio.IntBuffer params) {
    GLES30.glGetQueryObjectuiv(id, pname, params);
}
