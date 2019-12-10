private void merge(Settings settings, File settingsFile) {
    try {
        json.readFields(settings, new JsonReader().parse(new FileReader(settingsFile)));
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error reading settings file: " + settingsFile, ex);
    }
}
