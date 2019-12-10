/**
 * Returns the children of this value as a newly allocated float array.
 * @throws IllegalStateException if this is not an array.
 */
public float[] asFloatArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    float[] array = new float[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        float v;
        switch(value.type) {
            case stringValue:
                v = Float.parseFloat(value.stringValue);
                break;
            case doubleValue:
                v = (float) value.doubleValue;
                break;
            case longValue:
                v = (float) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to float: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
