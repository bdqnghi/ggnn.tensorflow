// @Override
// public void glGetActiveUniformsiv(int program, int uniformCount, int[] uniformIndices, int uniformIndicesOffset, int pname,
// int[] params, int paramsOffset) {
// GLES30.glGetActiveUniformsiv(program, uniformCount, uniformIndices, uniformIndicesOffset, pname, params, paramsOffset);
// }
@Override
public void glGetActiveUniformsiv(int program, int uniformCount, java.nio.IntBuffer uniformIndices, int pname, java.nio.IntBuffer params) {
    GLES30.glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}
