private AssetFilter getAssetFilter(GeneratorContext context) {
    ConfigurationProperty assetFilterClassProperty = null;
    try {
        assetFilterClassProperty = context.getPropertyOracle().getConfigurationProperty("gdx.assetfilterclass");
    } catch (BadPropertyValueException e) {
        return new DefaultAssetFilter();
    }
    if (assetFilterClassProperty.getValues().size() == 0) {
        return new DefaultAssetFilter();
    }
    String assetFilterClass = assetFilterClassProperty.getValues().get(0);
    if (assetFilterClass == null)
        return new DefaultAssetFilter();
    try {
        return (AssetFilter) Class.forName(assetFilterClass).newInstance();
    } catch (Exception e) {
        throw new RuntimeException("Couldn't instantiate custom AssetFilter '" + assetFilterClass + "', make sure the class is public and has a public default constructor", e);
    }
}
