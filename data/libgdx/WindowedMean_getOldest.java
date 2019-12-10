/**
 * @return the oldest value in the window
 */
public float getOldest() {
    return last_value == values.length - 1 ? values[0] : values[last_value + 1];
}
