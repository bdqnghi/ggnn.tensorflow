/**
 * Returns this value as a boolean.
 * @throws IllegalStateException if this an array or object.
 */
public boolean asBoolean() {
    switch(type) {
        case stringValue:
            return stringValue.equalsIgnoreCase("true");
        case doubleValue:
            return doubleValue != 0;
        case longValue:
            return longValue != 0;
        case booleanValue:
            return longValue != 0;
    }
    throw new IllegalStateException("Value cannot be converted to boolean: " + type);
}
