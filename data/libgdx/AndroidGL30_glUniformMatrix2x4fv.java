// @Override
// public void glUniformMatrix2x4fv(int location, int count, boolean transpose, float[] value, int offset) {
// GLES30.glUniformMatrix2x4fv(location, count, transpose, value, offset);
// }
@Override
public void glUniformMatrix2x4fv(int location, int count, boolean transpose, java.nio.FloatBuffer value) {
    GLES30.glUniformMatrix2x4fv(location, count, transpose, value);
}
