// @Override
// public void glUniformMatrix3x2fv(int location, int count, boolean transpose, float[] value, int offset) {
// GLES30.glUniformMatrix3x2fv(location, count, transpose, value, offset);
// }
@Override
public void glUniformMatrix3x2fv(int location, int count, boolean transpose, java.nio.FloatBuffer value) {
    GLES30.glUniformMatrix3x2fv(location, count, transpose, value);
}
