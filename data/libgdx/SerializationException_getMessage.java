public String getMessage() {
    if (trace == null)
        return super.getMessage();
    StringBuffer buffer = new StringBuffer(512);
    buffer.append(super.getMessage());
    if (buffer.length() > 0)
        buffer.append('\n');
    buffer.append("Serialization trace:");
    buffer.append(trace);
    return buffer.toString();
}
