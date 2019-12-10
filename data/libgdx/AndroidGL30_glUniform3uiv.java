// @Override
// public void glUniform2uiv(int location, int count, int[] value, int offset) {
// GLES30.glUniform2uiv(location, count, value, offset);
// }
// 
// @Override
// public void glUniform2uiv(int location, int count, java.nio.IntBuffer value) {
// GLES30.glUniform2uiv(location, count, value);
// }
// 
// @Override
// public void glUniform3uiv(int location, int count, int[] value, int offset) {
// GLES30.glUniform3uiv(location, count, value, offset);
// }
@Override
public void glUniform3uiv(int location, int count, java.nio.IntBuffer value) {
    GLES30.glUniform3uiv(location, count, value);
}
