public String toJson(OutputType outputType) {
    if (isValue())
        return asString();
    StringBuilder buffer = new StringBuilder(512);
    json(this, buffer, outputType);
    return buffer.toString();
}
