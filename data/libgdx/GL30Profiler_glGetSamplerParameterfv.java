@Override
public void glGetSamplerParameterfv(int sampler, int pname, FloatBuffer params) {
    calls++;
    gl30.glGetSamplerParameterfv(sampler, pname, params);
    check();
}
