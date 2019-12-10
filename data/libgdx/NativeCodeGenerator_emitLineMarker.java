private void emitLineMarker(StringBuffer buffer, int line) {
    buffer.append("\n//@line:");
    buffer.append(line);
    buffer.append("\n");
}
