private float getSum(float[] values, int numSamples) {
    numSamples = Math.min(sampleSize, numSamples);
    float sum = 0;
    for (int i = 0; i < numSamples; i++) {
        sum += values[i];
    }
    if (numSamples == 0)
        return 0;
    return sum;
}
