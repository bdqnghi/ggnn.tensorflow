@Override
public void glSampleCoverage(float value, boolean invert) {
    calls++;
    gl20.glSampleCoverage(value, invert);
    check();
}
