/**
 * Returns the children of this value as a newly allocated short array.
 * @throws IllegalStateException if this is not an array.
 */
public short[] asShortArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    short[] array = new short[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        short v;
        switch(value.type) {
            case stringValue:
                v = Short.parseShort(value.stringValue);
                break;
            case doubleValue:
                v = (short) value.doubleValue;
                break;
            case longValue:
                v = (short) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? (short) 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to short: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
