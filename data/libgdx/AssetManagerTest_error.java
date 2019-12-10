@Override
public void error(AssetDescriptor asset, Throwable throwable) {
    Gdx.app.error("AssetManagerTest", "Couldn't load asset: " + asset, (Exception) throwable);
}
