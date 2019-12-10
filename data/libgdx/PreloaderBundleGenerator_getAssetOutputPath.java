private String getAssetOutputPath(GeneratorContext context) {
    ConfigurationProperty assetPathProperty = null;
    try {
        assetPathProperty = context.getPropertyOracle().getConfigurationProperty("gdx.assetoutputpath");
    } catch (BadPropertyValueException e) {
        return null;
    }
    if (assetPathProperty.getValues().size() == 0) {
        return null;
    }
    String paths = assetPathProperty.getValues().get(0);
    if (paths == null) {
        return null;
    } else {
        ArrayList<String> existingPaths = new ArrayList<String>();
        String[] tokens = paths.split(",");
        String path = null;
        for (String token : tokens) {
            if (new FileWrapper(token).exists() || new FileWrapper(token).mkdirs()) {
                path = token;
            }
        }
        if (path != null && !path.endsWith("/")) {
            path += "/";
        }
        return path;
    }
}
