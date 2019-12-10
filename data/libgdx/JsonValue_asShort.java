/**
 * Returns this value as a short.
 * @throws IllegalStateException if this an array or object.
 */
public short asShort() {
    switch(type) {
        case stringValue:
            return Short.parseShort(stringValue);
        case doubleValue:
            return (short) doubleValue;
        case longValue:
            return (short) longValue;
        case booleanValue:
            return longValue != 0 ? (short) 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to short: " + type);
}
