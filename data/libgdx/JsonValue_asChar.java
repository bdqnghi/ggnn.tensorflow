/**
 * Returns this value as a char.
 * @throws IllegalStateException if this an array or object.
 */
public char asChar() {
    switch(type) {
        case stringValue:
            return stringValue.length() == 0 ? 0 : stringValue.charAt(0);
        case doubleValue:
            return (char) doubleValue;
        case longValue:
            return (char) longValue;
        case booleanValue:
            return longValue != 0 ? (char) 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to char: " + type);
}
