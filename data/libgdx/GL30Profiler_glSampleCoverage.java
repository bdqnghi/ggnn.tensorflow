@Override
public void glSampleCoverage(float value, boolean invert) {
    calls++;
    gl30.glSampleCoverage(value, invert);
    check();
}
