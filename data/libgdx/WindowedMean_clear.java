/**
 * clears this WindowedMean. The class will only return meaningful values after enough data has been added again.
 */
public void clear() {
    added_values = 0;
    last_value = 0;
    for (int i = 0; i < values.length; i++) values[i] = 0;
    dirty = true;
}
