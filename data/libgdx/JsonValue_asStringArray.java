/**
 * Returns the children of this value as a newly allocated String array.
 * @throws IllegalStateException if this is not an array.
 */
public String[] asStringArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    String[] array = new String[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        String v;
        switch(value.type) {
            case stringValue:
                v = value.stringValue;
                break;
            case doubleValue:
                v = stringValue != null ? stringValue : Double.toString(value.doubleValue);
                break;
            case longValue:
                v = stringValue != null ? stringValue : Long.toString(value.longValue);
                break;
            case booleanValue:
                v = value.longValue != 0 ? "true" : "false";
                break;
            case nullValue:
                v = null;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to string: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
