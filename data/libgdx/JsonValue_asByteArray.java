/**
 * Returns the children of this value as a newly allocated byte array.
 * @throws IllegalStateException if this is not an array.
 */
public byte[] asByteArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    byte[] array = new byte[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        byte v;
        switch(value.type) {
            case stringValue:
                v = Byte.parseByte(value.stringValue);
                break;
            case doubleValue:
                v = (byte) value.doubleValue;
                break;
            case longValue:
                v = (byte) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? (byte) 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to byte: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
