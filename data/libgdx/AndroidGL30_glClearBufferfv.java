// 
// @Override
// public void glClearBufferfv(int buffer, int drawbuffer, float[] value, int offset) {
// GLES30.glClearBufferfv(buffer, drawbuffer, value, offset);
// }
@Override
public void glClearBufferfv(int buffer, int drawbuffer, java.nio.FloatBuffer value) {
    GLES30.glClearBufferfv(buffer, drawbuffer, value);
}
