@Override
public void glSamplerParameterf(int sampler, int pname, float param) {
    calls++;
    gl30.glSamplerParameterf(sampler, pname, param);
    check();
}
