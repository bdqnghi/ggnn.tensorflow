@Override
public void glGetSamplerParameterfv(int sampler, int pname, FloatBuffer params) {
    GL33.glGetSamplerParameter(sampler, pname, params);
}
