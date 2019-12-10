@Override
public void glGetSamplerParameteriv(int sampler, int pname, IntBuffer params) {
    calls++;
    gl30.glGetSamplerParameteriv(sampler, pname, params);
    check();
}
