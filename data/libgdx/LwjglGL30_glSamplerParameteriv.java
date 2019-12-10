@Override
public void glSamplerParameteriv(int sampler, int pname, IntBuffer param) {
    GL33.glSamplerParameter(sampler, pname, param);
}
