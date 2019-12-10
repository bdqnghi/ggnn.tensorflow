@Override
public void glSamplerParameterfv(int sampler, int pname, FloatBuffer param) {
    GL33.glSamplerParameter(sampler, pname, param);
}
