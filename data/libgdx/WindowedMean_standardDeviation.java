/**
 * @return The standard deviation
 */
public float standardDeviation() {
    if (!hasEnoughData())
        return 0;
    float mean = getMean();
    float sum = 0;
    for (int i = 0; i < values.length; i++) {
        sum += (values[i] - mean) * (values[i] - mean);
    }
    return (float) Math.sqrt(sum / values.length);
}
