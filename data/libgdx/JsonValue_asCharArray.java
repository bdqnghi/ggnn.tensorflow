/**
 * Returns the children of this value as a newly allocated char array.
 * @throws IllegalStateException if this is not an array.
 */
public char[] asCharArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    char[] array = new char[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        char v;
        switch(value.type) {
            case stringValue:
                v = value.stringValue.length() == 0 ? 0 : value.stringValue.charAt(0);
                break;
            case doubleValue:
                v = (char) value.doubleValue;
                break;
            case longValue:
                v = (char) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? (char) 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to char: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
