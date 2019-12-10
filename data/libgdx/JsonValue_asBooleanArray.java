/**
 * Returns the children of this value as a newly allocated boolean array.
 * @throws IllegalStateException if this is not an array.
 */
public boolean[] asBooleanArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    boolean[] array = new boolean[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        boolean v;
        switch(value.type) {
            case stringValue:
                v = Boolean.parseBoolean(value.stringValue);
                break;
            case doubleValue:
                v = value.doubleValue == 0;
                break;
            case longValue:
                v = value.longValue == 0;
                break;
            case booleanValue:
                v = value.longValue != 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to boolean: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
