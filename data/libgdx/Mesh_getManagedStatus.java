public static String getManagedStatus() {
    StringBuilder builder = new StringBuilder();
    int i = 0;
    builder.append("Managed meshes/app: { ");
    for (Application app : meshes.keySet()) {
        builder.append(meshes.get(app).size);
        builder.append(" ");
    }
    builder.append("}");
    return builder.toString();
}
