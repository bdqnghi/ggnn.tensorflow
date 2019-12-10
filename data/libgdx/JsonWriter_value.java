public JsonWriter value(Object value) throws IOException {
    if (quoteLongValues && (value instanceof Long || value instanceof Double || value instanceof BigDecimal || value instanceof BigInteger)) {
        value = value.toString();
    } else if (value instanceof Number) {
        Number number = (Number) value;
        long longValue = number.longValue();
        if (number.doubleValue() == longValue)
            value = longValue;
    }
    requireCommaOrName();
    writer.write(outputType.quoteValue(value));
    return this;
}
