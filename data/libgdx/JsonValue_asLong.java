/**
 * Returns this value as a long.
 * @throws IllegalStateException if this an array or object.
 */
public long asLong() {
    switch(type) {
        case stringValue:
            return Long.parseLong(stringValue);
        case doubleValue:
            return (long) doubleValue;
        case longValue:
            return longValue;
        case booleanValue:
            return longValue != 0 ? 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to long: " + type);
}
