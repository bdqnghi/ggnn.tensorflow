private String getAssetPath(GeneratorContext context) {
    ConfigurationProperty assetPathProperty = null;
    try {
        assetPathProperty = context.getPropertyOracle().getConfigurationProperty("gdx.assetpath");
    } catch (BadPropertyValueException e) {
        throw new RuntimeException("No gdx.assetpath defined. Add <set-configuration-property name=\"gdx.assetpath\" value=\"relative/path/to/assets/\"/> to your GWT projects gwt.xml file");
    }
    if (assetPathProperty.getValues().size() == 0) {
        throw new RuntimeException("No gdx.assetpath defined. Add <set-configuration-property name=\"gdx.assetpath\" value=\"relative/path/to/assets/\"/> to your GWT projects gwt.xml file");
    }
    String paths = assetPathProperty.getValues().get(0);
    if (paths == null) {
        throw new RuntimeException("No gdx.assetpath defined. Add <set-configuration-property name=\"gdx.assetpath\" value=\"relative/path/to/assets/\"/> to your GWT projects gwt.xml file");
    } else {
        ArrayList<String> existingPaths = new ArrayList<String>();
        String[] tokens = paths.split(",");
        for (String token : tokens) {
            System.out.println(token);
            if (new FileWrapper(token).exists() || new FileWrapper("../" + token).exists()) {
                return token;
            }
        }
        throw new RuntimeException("No valid gdx.assetpath defined. Fix <set-configuration-property name=\"gdx.assetpath\" value=\"relative/path/to/assets/\"/> in your GWT projects gwt.xml file");
    }
}
