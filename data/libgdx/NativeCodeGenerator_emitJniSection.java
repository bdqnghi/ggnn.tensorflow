private void emitJniSection(StringBuffer buffer, JniSection section) {
    emitLineMarker(buffer, section.getStartIndex());
    buffer.append(section.getNativeCode().replace("\r", ""));
}
