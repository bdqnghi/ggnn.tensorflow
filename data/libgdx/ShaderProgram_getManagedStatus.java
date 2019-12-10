public static String getManagedStatus() {
    StringBuilder builder = new StringBuilder();
    int i = 0;
    builder.append("Managed shaders/app: { ");
    for (Application app : shaders.keys()) {
        builder.append(shaders.get(app).size);
        builder.append(" ");
    }
    builder.append("}");
    return builder.toString();
}
