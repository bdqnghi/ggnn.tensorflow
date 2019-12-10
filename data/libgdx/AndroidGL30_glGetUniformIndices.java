// 
// @Override
// public void glGetUniformIndices(int program, String[] uniformNames, int[] uniformIndices, int uniformIndicesOffset) {
// GLES30.glGetUniformIndices(program, uniformNames, uniformIndices, uniformIndicesOffset);
// }
@Override
public void glGetUniformIndices(int program, String[] uniformNames, java.nio.IntBuffer uniformIndices) {
    GLES30.glGetUniformIndices(program, uniformNames, uniformIndices);
}
