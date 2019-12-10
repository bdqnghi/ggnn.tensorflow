/**
 * returns the mean of the samples added to this instance. Only returns meaningful results when at least window_size samples
 * as specified in the constructor have been added.
 * @return the mean
 */
public float getMean() {
    if (hasEnoughData()) {
        if (dirty == true) {
            float mean = 0;
            for (int i = 0; i < values.length; i++) mean += values[i];
            this.mean = mean / values.length;
            dirty = false;
        }
        return this.mean;
    } else
        return 0;
}
