/**
 * Returns the children of this value as a newly allocated long array.
 * @throws IllegalStateException if this is not an array.
 */
public long[] asLongArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    long[] array = new long[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        long v;
        switch(value.type) {
            case stringValue:
                v = Long.parseLong(value.stringValue);
                break;
            case doubleValue:
                v = (long) value.doubleValue;
                break;
            case longValue:
                v = value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to long: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
