@Override
public void glSamplerParameteri(int sampler, int pname, int param) {
    calls++;
    gl30.glSamplerParameteri(sampler, pname, param);
    check();
}
