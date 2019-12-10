// @Override
// public void glUniformMatrix2x3fv(int location, int count, boolean transpose, float[] value, int offset) {
// GLES30.glUniformMatrix2x3fv(location, count, transpose, value, offset);
// }
@Override
public void glUniformMatrix2x3fv(int location, int count, boolean transpose, java.nio.FloatBuffer value) {
    GLES30.glUniformMatrix2x3fv(location, count, transpose, value);
}
