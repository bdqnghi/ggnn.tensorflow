@Override
public void glSamplerParameterfv(int sampler, int pname, FloatBuffer param) {
    calls++;
    gl30.glSamplerParameterfv(sampler, pname, param);
    check();
}
