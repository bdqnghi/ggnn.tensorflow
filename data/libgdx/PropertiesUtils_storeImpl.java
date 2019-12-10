private static void storeImpl(ObjectMap<String, String> properties, Writer writer, String comment, boolean escapeUnicode) throws IOException {
    if (comment != null) {
        writeComment(writer, comment);
    }
    writer.write("#");
    writer.write(new Date().toString());
    writer.write(LINE_SEPARATOR);
    StringBuilder sb = new StringBuilder(200);
    for (Entry<String, String> entry : properties.entries()) {
        dumpString(sb, entry.key, true, escapeUnicode);
        sb.append('=');
        dumpString(sb, entry.value, false, escapeUnicode);
        writer.write(LINE_SEPARATOR);
        writer.write(sb.toString());
        sb.setLength(0);
    }
    writer.flush();
}
