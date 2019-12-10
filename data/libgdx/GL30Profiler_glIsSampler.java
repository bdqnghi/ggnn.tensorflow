@Override
public boolean glIsSampler(int sampler) {
    calls++;
    final boolean result = gl30.glIsSampler(sampler);
    check();
    return result;
}
