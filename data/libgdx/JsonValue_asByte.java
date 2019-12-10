/**
 * Returns this value as a byte.
 * @throws IllegalStateException if this an array or object.
 */
public byte asByte() {
    switch(type) {
        case stringValue:
            return Byte.parseByte(stringValue);
        case doubleValue:
            return (byte) doubleValue;
        case longValue:
            return (byte) longValue;
        case booleanValue:
            return longValue != 0 ? (byte) 1 : 0;
    }
    throw new IllegalStateException("Value cannot be converted to byte: " + type);
}
