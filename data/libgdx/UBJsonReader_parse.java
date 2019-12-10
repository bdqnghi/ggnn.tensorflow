protected JsonValue parse(final DataInputStream din, final byte type) throws IOException {
    if (type == '[')
        return parseArray(din);
    else if (type == '{')
        return parseObject(din);
    else if (type == 'Z')
        return new JsonValue(JsonValue.ValueType.nullValue);
    else if (type == 'T')
        return new JsonValue(true);
    else if (type == 'F')
        return new JsonValue(false);
    else if (type == 'B')
        return new JsonValue((long) readUChar(din));
    else if (type == 'U')
        return new JsonValue((long) readUChar(din));
    else if (type == 'i')
        return new JsonValue(oldFormat ? (long) din.readShort() : (long) din.readByte());
    else if (type == 'I')
        return new JsonValue(oldFormat ? (long) din.readInt() : (long) din.readShort());
    else if (type == 'l')
        return new JsonValue((long) din.readInt());
    else if (type == 'L')
        return new JsonValue(din.readLong());
    else if (type == 'd')
        return new JsonValue(din.readFloat());
    else if (type == 'D')
        return new JsonValue(din.readDouble());
    else if (type == 's' || type == 'S')
        return new JsonValue(parseString(din, type));
    else if (type == 'a' || type == 'A')
        return parseData(din, type);
    else
        throw new GdxRuntimeException("Unrecognized data type");
}
