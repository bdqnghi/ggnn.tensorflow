/**
 * Returns this value as an int.
 * @throws IllegalStateException if this an array or object.
 */
public int asInt() {
    switch(type) {
        case stringValue:
            return Integer.parseInt(stringValue);
        case doubleValue:
            return (int) doubleValue;
        case longValue:
            return (int) longValue;
        case booleanValue:
            return longValue != 0 ? 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to int: " + type);
}
