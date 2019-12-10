private List<String> getClasspathFiles(GeneratorContext context) {
    List<String> classpathFiles = new ArrayList<String>();
    try {
        ConfigurationProperty prop = context.getPropertyOracle().getConfigurationProperty("gdx.files.classpath");
        for (String value : prop.getValues()) {
            classpathFiles.add(value);
        }
    } catch (BadPropertyValueException e) {
    // Ignore
    }
    return classpathFiles;
}
