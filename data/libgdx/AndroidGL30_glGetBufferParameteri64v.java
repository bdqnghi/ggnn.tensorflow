// @Override
// public void glGetSynciv(long sync, int pname, int bufSize, int[] length, int lengthOffset, int[] values, int valuesOffset) {
// GLES30.glGetSynciv(sync, pname, bufSize, length, lengthOffset, values, valuesOffset);
// }
// 
// @Override
// public void glGetSynciv(long sync, int pname, int bufSize, java.nio.IntBuffer length, java.nio.IntBuffer values) {
// GLES30.glGetSynciv(sync, pname, bufSize, length, values);
// }
// 
// @Override
// public void glGetInteger64i_v(int target, int index, long[] data, int offset) {
// GLES30.glGetInteger64i_v(target, index, data, offset);
// }
// 
// @Override
// public void glGetInteger64i_v(int target, int index, java.nio.LongBuffer data) {
// GLES30.glGetInteger64i_v(target, index, data);
// }
// 
// @Override
// public void glGetBufferParameteri64v(int target, int pname, long[] params, int offset) {
// GLES30.glGetBufferParameteri64v(target, pname, params, offset);
// }
@Override
public void glGetBufferParameteri64v(int target, int pname, java.nio.LongBuffer params) {
    GLES30.glGetBufferParameteri64v(target, pname, params);
}
