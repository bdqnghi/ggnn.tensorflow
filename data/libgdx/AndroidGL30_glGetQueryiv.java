// @Override
// public void glGetQueryiv(int target, int pname, int[] params, int offset) {
// GLES30.glGetQueryiv(target, pname, params, offset);
// }
@Override
public void glGetQueryiv(int target, int pname, java.nio.IntBuffer params) {
    GLES30.glGetQueryiv(target, pname, params);
}
