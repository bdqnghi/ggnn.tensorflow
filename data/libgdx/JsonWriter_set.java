public JsonWriter set(String name, Object value) throws IOException {
    return name(name).value(value);
}
