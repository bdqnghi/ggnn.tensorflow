protected JsonValue parseArray(final DataInputStream din) throws IOException {
    JsonValue result = new JsonValue(JsonValue.ValueType.array);
    byte type = din.readByte();
    byte valueType = 0;
    if (type == '$') {
        valueType = din.readByte();
        type = din.readByte();
    }
    long size = -1;
    if (type == '#') {
        size = parseSize(din, false, -1);
        if (size < 0)
            throw new GdxRuntimeException("Unrecognized data type");
        if (size == 0)
            return result;
        type = valueType == 0 ? din.readByte() : valueType;
    }
    JsonValue prev = null;
    long c = 0;
    while (din.available() > 0 && type != ']') {
        final JsonValue val = parse(din, type);
        val.parent = result;
        if (prev != null) {
            val.prev = prev;
            prev.next = val;
            result.size++;
        } else {
            result.child = val;
            result.size = 1;
        }
        prev = val;
        if (size > 0 && ++c >= size)
            break;
        type = valueType == 0 ? din.readByte() : valueType;
    }
    return result;
}
