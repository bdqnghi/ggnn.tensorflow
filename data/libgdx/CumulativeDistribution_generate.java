/**
 * Generate the cumulative distribution
 */
public void generate() {
    float sum = 0;
    for (int i = 0; i < values.size; ++i) {
        sum += values.items[i].interval;
        values.items[i].frequency = sum;
    }
}
