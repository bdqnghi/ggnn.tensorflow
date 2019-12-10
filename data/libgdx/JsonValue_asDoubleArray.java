/**
 * Returns the children of this value as a newly allocated double array.
 * @throws IllegalStateException if this is not an array.
 */
public double[] asDoubleArray() {
    if (type != ValueType.array)
        throw new IllegalStateException("Value is not an array: " + type);
    double[] array = new double[size];
    int i = 0;
    for (JsonValue value = child; value != null; value = value.next, i++) {
        double v;
        switch(value.type) {
            case stringValue:
                v = Double.parseDouble(value.stringValue);
                break;
            case doubleValue:
                v = value.doubleValue;
                break;
            case longValue:
                v = (double) value.longValue;
                break;
            case booleanValue:
                v = value.longValue != 0 ? 1 : 0;
                break;
            default:
                throw new IllegalStateException("Value cannot be converted to double: " + value.type);
        }
        array[i] = v;
    }
    return array;
}
