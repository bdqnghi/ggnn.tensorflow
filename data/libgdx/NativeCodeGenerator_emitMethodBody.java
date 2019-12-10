protected void emitMethodBody(StringBuffer buffer, JavaMethod javaMethod) {
    // emit a line marker
    emitLineMarker(buffer, javaMethod.getEndIndex());
    // FIXME add tabs cleanup
    buffer.append(javaMethod.getNativeCode());
    buffer.append("\n");
}
