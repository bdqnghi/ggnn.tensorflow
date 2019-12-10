private void prettyPrint(JsonValue object, StringBuilder buffer, int indent, PrettyPrintSettings settings) {
    OutputType outputType = settings.outputType;
    if (object.isObject()) {
        if (object.child == null)
            buffer.append("{}");
        else {
            boolean newLines = !isFlat(object);
            int start = buffer.length();
            outer: while (true) {
                buffer.append(newLines ? "{\n" : "{ ");
                int i = 0;
                for (JsonValue child = object.child; child != null; child = child.next) {
                    if (newLines)
                        indent(indent, buffer);
                    buffer.append(outputType.quoteName(child.name));
                    buffer.append(": ");
                    prettyPrint(child, buffer, indent + 1, settings);
                    if ((!newLines || outputType != OutputType.minimal) && child.next != null)
                        buffer.append(',');
                    buffer.append(newLines ? '\n' : ' ');
                    if (!newLines && buffer.length() - start > settings.singleLineColumns) {
                        buffer.setLength(start);
                        newLines = true;
                        continue outer;
                    }
                }
                break;
            }
            if (newLines)
                indent(indent - 1, buffer);
            buffer.append('}');
        }
    } else if (object.isArray()) {
        if (object.child == null)
            buffer.append("[]");
        else {
            boolean newLines = !isFlat(object);
            boolean wrap = settings.wrapNumericArrays || !isNumeric(object);
            int start = buffer.length();
            outer: while (true) {
                buffer.append(newLines ? "[\n" : "[ ");
                for (JsonValue child = object.child; child != null; child = child.next) {
                    if (newLines)
                        indent(indent, buffer);
                    prettyPrint(child, buffer, indent + 1, settings);
                    if ((!newLines || outputType != OutputType.minimal) && child.next != null)
                        buffer.append(',');
                    buffer.append(newLines ? '\n' : ' ');
                    if (wrap && !newLines && buffer.length() - start > settings.singleLineColumns) {
                        buffer.setLength(start);
                        newLines = true;
                        continue outer;
                    }
                }
                break;
            }
            if (newLines)
                indent(indent - 1, buffer);
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
