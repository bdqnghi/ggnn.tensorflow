/**
 * @return the value last added
 */
public float getLatest() {
    return values[last_value - 1 == -1 ? values.length - 1 : last_value - 1];
}
