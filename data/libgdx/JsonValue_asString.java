/**
 * Returns this value as a string.
 * @return May be null if this value is null.
 * @throws IllegalStateException if this an array or object.
 */
public String asString() {
    switch(type) {
        case stringValue:
            return stringValue;
        case doubleValue:
            return stringValue != null ? stringValue : Double.toString(doubleValue);
        case longValue:
            return stringValue != null ? stringValue : Long.toString(longValue);
        case booleanValue:
            return longValue != 0 ? "true" : "false";
        case nullValue:
            return null;
    }
    throw new IllegalStateException("Value cannot be converted to string: " + type);
}
