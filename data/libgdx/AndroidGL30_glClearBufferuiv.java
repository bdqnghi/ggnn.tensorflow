// @Override
// public void glClearBufferuiv(int buffer, int drawbuffer, int[] value, int offset) {
// GLES30.glClearBufferuiv(buffer, drawbuffer, value, offset);
// }
@Override
public void glClearBufferuiv(int buffer, int drawbuffer, java.nio.IntBuffer value) {
    GLES30.glClearBufferuiv(buffer, drawbuffer, value);
}
