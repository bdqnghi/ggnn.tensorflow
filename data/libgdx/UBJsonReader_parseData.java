protected JsonValue parseData(final DataInputStream din, final byte blockType) throws IOException {
    // FIXME: a/A is currently not following the specs because it lacks strong typed, fixed sized containers,
    // see: https://github.com/thebuzzmedia/universal-binary-json/issues/27
    final byte dataType = din.readByte();
    final long size = blockType == 'A' ? readUInt(din) : (long) readUChar(din);
    final JsonValue result = new JsonValue(JsonValue.ValueType.array);
    JsonValue prev = null;
    for (long i = 0; i < size; i++) {
        final JsonValue val = parse(din, dataType);
        val.parent = result;
        if (prev != null) {
            prev.next = val;
            result.size++;
        } else {
            result.child = val;
            result.size = 1;
        }
        prev = val;
    }
    return result;
}
