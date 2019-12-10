public String toString() {
    StringBuilder builder = new StringBuilder();
    builder.append("[");
    for (int i = 0; i < attributes.length; i++) {
        builder.append("(");
        builder.append(attributes[i].alias);
        builder.append(", ");
        builder.append(attributes[i].usage);
        builder.append(", ");
        builder.append(attributes[i].numComponents);
        builder.append(", ");
        builder.append(attributes[i].offset);
        builder.append(")");
        builder.append("\n");
    }
    builder.append("]");
    return builder.toString();
}
