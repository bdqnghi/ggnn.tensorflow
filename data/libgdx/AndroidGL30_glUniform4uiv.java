// @Override
// public void glUniform4uiv(int location, int count, int[] value, int offset) {
// GLES30.glUniform4uiv(location, count, value, offset);
// }
@Override
public void glUniform4uiv(int location, int count, java.nio.IntBuffer value) {
    GLES30.glUniform4uiv(location, count, value);
}
