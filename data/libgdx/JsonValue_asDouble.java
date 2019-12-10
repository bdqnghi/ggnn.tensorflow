/**
 * Returns this value as a double.
 * @throws IllegalStateException if this an array or object.
 */
public double asDouble() {
    switch(type) {
        case stringValue:
            return Double.parseDouble(stringValue);
        case doubleValue:
            return doubleValue;
        case longValue:
            return (double) longValue;
        case booleanValue:
            return longValue != 0 ? 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to double: " + type);
}
