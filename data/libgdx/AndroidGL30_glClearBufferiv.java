// @Override
// public void glClearBufferiv(int buffer, int drawbuffer, int[] value, int offset) {
// GLES30.glClearBufferiv(buffer, drawbuffer, value, offset);
// }
@Override
public void glClearBufferiv(int buffer, int drawbuffer, java.nio.IntBuffer value) {
    GLES30.glClearBufferiv(buffer, drawbuffer, value);
}
