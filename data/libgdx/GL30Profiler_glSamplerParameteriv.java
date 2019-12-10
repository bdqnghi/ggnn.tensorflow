@Override
public void glSamplerParameteriv(int sampler, int pname, IntBuffer param) {
    calls++;
    gl30.glSamplerParameteriv(sampler, pname, param);
    check();
}
