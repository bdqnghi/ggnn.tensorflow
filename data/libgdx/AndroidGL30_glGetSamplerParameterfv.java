// @Override
// public void glGetSamplerParameterfv(int sampler, int pname, float[] params, int offset) {
// GLES30.glGetSamplerParameterfv(sampler, pname, params, offset);
// }
@Override
public void glGetSamplerParameterfv(int sampler, int pname, java.nio.FloatBuffer params) {
    GLES30.glGetSamplerParameterfv(sampler, pname, params);
}
