/**
 * Returns the children of this value as a newly allocated int array.
 * @throws IllegalStateException if this is not an array.
 */
public int[] asIntArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    int[] array = new int[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        int v;
        switch(value.type) {
            case stringValue:
                v = Integer.parseInt(value.stringValue);
                break;
            case doubleValue:
                v = (int) value.doubleValue;
                break;
            case longValue:
                v = (int) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to int: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
