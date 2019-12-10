public void addExtension(ExternalExtension extension, Boolean checkbox, String name, String description, String version, String compatibility, URI support) {
    addRow(new Object[] { checkbox, name, description, version, compatibility, support });
    extensions.put(rowCount++, extension);
}
