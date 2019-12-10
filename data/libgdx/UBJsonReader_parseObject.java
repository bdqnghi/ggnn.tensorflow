protected JsonValue parseObject(final DataInputStream din) throws IOException {
    JsonValue result = new JsonValue(JsonValue.ValueType.object);
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
        type = din.readByte();
    }
    JsonValue prev = null;
    long c = 0;
    while (din.available() > 0 && type != '}') {
        final String key = parseString(din, true, type);
        final JsonValue child = parse(din, valueType == 0 ? din.readByte() : valueType);
        child.setName(key);
        child.parent = result;
        if (prev != null) {
            child.prev = prev;
            prev.next = child;
            result.size++;
        } else {
            result.child = child;
            result.size = 1;
        }
        prev = child;
        if (size > 0 && ++c >= size)
            break;
        type = din.readByte();
    }
    return result;
}
