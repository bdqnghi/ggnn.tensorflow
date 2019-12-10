/**
 * Returns this value as a float.
 * @throws IllegalStateException if this an array or object.
 */
public float asFloat() {
    switch(type) {
        case stringValue:
            return Float.parseFloat(stringValue);
        case doubleValue:
            return (float) doubleValue;
        case longValue:
            return (float) longValue;
        case booleanValue:
            return longValue != 0 ? 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to float: " + type);
}
