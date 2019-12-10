// @Override
// public void glDrawBuffers(int n, int[] bufs, int offset) {
// GLES30.glDrawBuffers(n, bufs, offset);
// }
@Override
public void glDrawBuffers(int n, java.nio.IntBuffer bufs) {
    GLES30.glDrawBuffers(n, bufs);
}
