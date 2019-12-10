public static String getManagedStatus() {
    StringBuilder builder = new StringBuilder();
    builder.append("Managed textures/app: { ");
    for (Application app : managedTextures.keySet()) {
        builder.append(managedTextures.get(app).size);
        builder.append(" ");
    }
    builder.append("}");
    return builder.toString();
}
