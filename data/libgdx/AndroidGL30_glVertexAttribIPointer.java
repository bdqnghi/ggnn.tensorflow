// @Override
// public void glGetTransformFeedbackVarying(int program, int index, int bufsize, int[] length, int lengthOffset, int[] size, int
// sizeOffset, int[] type, int typeOffset, byte[] name, int nameOffset) {
// GLES30.glGetTransformFeedbackVarying(program, index, bufsize, length, lengthOffset, size, sizeOffset, type, typeOffset, name,
// nameOffset);
// }
// @Override
// public void glGetTransformFeedbackVarying(int program, int index, int bufsize, java.nio.IntBuffer length, java.nio.IntBuffer
// size, java.nio.IntBuffer type, byte name) {
// GLES30.glGetTransformFeedbackVarying(program, index, bufsize, length, size, type, name);
// }
// 
// @Override
// public String glGetTransformFeedbackVarying(int program, int index, int[] size, int sizeOffset, int[] type, int typeOffset) {
// return GLES30.glGetTransformFeedbackVarying(program, index, size, sizeOffset, type, typeOffset);
// }
// 
// @Override
// public String glGetTransformFeedbackVarying(int program, int index, java.nio.IntBuffer size, java.nio.IntBuffer type) {
// return GLES30.glGetTransformFeedbackVarying(program, index, size, type);
// }
@Override
public void glVertexAttribIPointer(int index, int size, int type, int stride, int offset) {
    GLES30.glVertexAttribIPointer(index, size, type, stride, offset);
}
