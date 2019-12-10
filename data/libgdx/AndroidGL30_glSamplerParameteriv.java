// 
// @Override
// public void glSamplerParameteriv(int sampler, int pname, int[] param, int offset) {
// GLES30.glSamplerParameteriv(sampler, pname, param, offset);
// }
@Override
public void glSamplerParameteriv(int sampler, int pname, java.nio.IntBuffer param) {
    GLES30.glSamplerParameteriv(sampler, pname, param);
}
