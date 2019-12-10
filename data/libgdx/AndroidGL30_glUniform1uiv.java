// @Override
// public void glUniform1ui(int location, int v0) {
// GLES30.glUniform1ui(location, v0);
// }
// 
// @Override
// public void glUniform2ui(int location, int v0, int v1) {
// GLES30.glUniform2ui(location, v0, v1);
// }
// 
// @Override
// public void glUniform3ui(int location, int v0, int v1, int v2) {
// GLES30.glUniform3ui(location, v0, v1, v2);
// }
// @Override
// public void glUniform4ui(int location, int v0, int v1, int v2, int v3) {
// GLES30.glUniform4ui(location, v0, v1, v2, v3);
// }
// 
// @Override
// public void glUniform1uiv(int location, int count, int[] value, int offset) {
// GLES30.glUniform1uiv(location, count, value, offset);
// }
@Override
public void glUniform1uiv(int location, int count, java.nio.IntBuffer value) {
    GLES30.glUniform1uiv(location, count, value);
}
