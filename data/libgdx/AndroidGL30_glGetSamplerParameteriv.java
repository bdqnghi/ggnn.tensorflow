// 
// @Override
// public void glGetSamplerParameteriv(int sampler, int pname, int[] params, int offset) {
// GLES30.glGetSamplerParameteriv(sampler, pname, params, offset);
// }
@Override
public void glGetSamplerParameteriv(int sampler, int pname, java.nio.IntBuffer params) {
    GLES30.glGetSamplerParameteriv(sampler, pname, params);
}
