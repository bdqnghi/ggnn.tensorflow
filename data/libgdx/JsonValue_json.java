private void json(JsonValue object, StringBuilder buffer, OutputType outputType) {
    if (object.isObject()) {
        if (object.child == null)
            buffer.append("{}");
        else {
            int start = buffer.length();
            while (true) {
                buffer.append('{');
                int i = 0;
                for (JsonValue child = object.child; child != null; child = child.next) {
                    buffer.append(outputType.quoteName(child.name));
                    buffer.append(':');
                    json(child, buffer, outputType);
                    if (child.next != null)
                        buffer.append(',');
                }
                break;
            }
            buffer.append('}');
        }
    } else if (object.isArray()) {
        if (object.child == null)
            buffer.append("[]");
        else {
            int start = buffer.length();
            while (true) {
                buffer.append('[');
                for (JsonValue child = object.child; child != null; child = child.next) {
                    json(child, buffer, outputType);
                    if (child.next != null)
                        buffer.append(',');
                }
                break;
            }
            buffer.append(']');
        }
    } else if (object.isString()) {
        buffer.append(outputType.quoteValue(object.asString()));
    } else if (object.isDouble()) {
        double doubleValue = object.asDouble();
        long longValue = object.asLong();
        buffer.append(doubleValue == longValue ? longValue : doubleValue);
    } else if (object.isLong()) {
        buffer.append(object.asLong());
    } else if (object.isBoolean()) {
        buffer.append(object.asBoolean());
    } else if (object.isNull()) {
        buffer.append("null");
    } else
        throw new SerializationException("Unknown object type: " + object);
}
