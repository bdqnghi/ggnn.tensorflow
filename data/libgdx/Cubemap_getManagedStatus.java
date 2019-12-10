public static String getManagedStatus() {
    StringBuilder builder = new StringBuilder();
    builder.append("Managed cubemap/app: { ");
    for (Application app : managedCubemaps.keySet()) {
        builder.append(managedCubemaps.get(app).size);
        builder.append(" ");
    }
    builder.append("}");
    return builder.toString();
}
