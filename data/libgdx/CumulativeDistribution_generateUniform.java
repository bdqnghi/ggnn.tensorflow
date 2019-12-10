/**
 * Generate the cumulative distribution in [0,1] where each value will have the same frequency and interval size
 */
public void generateUniform() {
    float freq = 1f / values.size;
    for (int i = 0; i < values.size; ++i) {
        // reset the interval to the normalized frequency
        values.items[i].interval = freq;
        values.items[i].frequency = (i + 1) * freq;
    }
}
