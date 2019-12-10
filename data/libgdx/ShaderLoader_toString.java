@Override
public String toString() {
    stringBuilder.setLength(0);
    for (final ObjectMap.Entry<String, ObjectMap<String, String>> entry : snippets.entries()) {
        stringBuilder.append(entry.key).append(": {");
        for (final String snipname : entry.value.keys()) stringBuilder.append(snipname).append(", ");
        stringBuilder.append("}\n");
    }
    return stringBuilder.toString();
}
