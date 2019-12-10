/**
 * adds a new sample to this mean. In case the window is full the oldest value will be replaced by this new value.
 *
 * @param value The value to add
 */
public void addValue(float value) {
    if (added_values < values.length)
        added_values++;
    values[last_value++] = value;
    if (last_value > values.length - 1)
        last_value = 0;
    dirty = true;
}
