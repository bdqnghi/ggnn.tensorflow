@Override
public void glSampleCoverage(float value, boolean invert) {
    super.glSampleCoverage(value, invert);
    checkError();
}
