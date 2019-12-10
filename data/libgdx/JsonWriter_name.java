public JsonWriter name(String name) throws IOException {
    if (current == null || current.array)
        throw new IllegalStateException("Current item must be an object.");
    if (!current.needsComma)
        current.needsComma = true;
    else
        writer.write(',');
    writer.write(outputType.quoteName(name));
    writer.write(':');
    named = true;
    return this;
}
