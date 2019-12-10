// @Override
// public long glFenceSync(int condition, int flags) {
// return GLES30.glFenceSync(condition, flags);
// }
// 
// @Override
// public boolean glIsSync(long sync) {
// return GLES30.glIsSync(sync);
// }
// 
// @Override
// public void glDeleteSync(long sync) {
// GLES30.glDeleteSync(sync);
// }
// 
// @Override
// public int glClientWaitSync(long sync, int flags, long timeout) {
// return GLES30.glClientWaitSync(sync, flags, timeout);
// }
// @Override
// public void glWaitSync(long sync, int flags, long timeout) {
// GLES30.glWaitSync(sync, flags, timeout);
// }
// 
// @Override
// public void glGetInteger64v(int pname, long[] params, int offset) {
// GLES30.glGetInteger64v(pname, params, offset);
// }
@Override
public void glGetInteger64v(int pname, java.nio.LongBuffer params) {
    GLES30.glGetInteger64v(pname, params);
}
