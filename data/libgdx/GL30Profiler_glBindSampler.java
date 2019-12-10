@Override
public void glBindSampler(int unit, int sampler) {
    calls++;
    gl30.glBindSampler(unit, sampler);
    check();
}
