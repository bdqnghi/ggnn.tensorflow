/**
 * Adds a value with interval size equal to zero to the distribution
 */
public void add(T value) {
    values.add(new CumulativeValue(value, 0, 0));
}
