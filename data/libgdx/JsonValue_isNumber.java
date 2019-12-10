/**
 * Returns true if this is a double or long value.
 */
public boolean isNumber() {
    return type == ValueType.doubleValue || type == ValueType.longValue;
}
