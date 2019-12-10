// @Override
// public void glSamplerParameterfv(int sampler, int pname, float[] param, int offset) {
// GLES30.glSamplerParameterfv(sampler, pname, param, offset);
// }
@Override
public void glSamplerParameterfv(int sampler, int pname, java.nio.FloatBuffer param) {
    GLES30.glSamplerParameterfv(sampler, pname, param);
}
