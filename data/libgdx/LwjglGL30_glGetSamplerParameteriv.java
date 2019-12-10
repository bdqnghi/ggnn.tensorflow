@Override
public void glGetSamplerParameteriv(int sampler, int pname, IntBuffer params) {
    GL33.glGetSamplerParameterI(sampler, pname, params);
}
