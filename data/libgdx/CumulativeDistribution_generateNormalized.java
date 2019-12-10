/**
 * Generate the cumulative distribution in [0,1] where each interval will get a frequency between [0,1]
 */
public void generateNormalized() {
    float sum = 0;
    for (int i = 0; i < values.size; ++i) {
        sum += values.items[i].interval;
    }
    float intervalSum = 0;
    for (int i = 0; i < values.size; ++i) {
        intervalSum += values.items[i].interval / sum;
        values.items[i].frequency = intervalSum;
    }
}
