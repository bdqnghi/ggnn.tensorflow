@Override
public void save(AssetManager manager, ResourceData resources) {
    SaveData data = resources.createSaveData("pointSpriteBatch");
    data.saveAsset(manager.getAssetFileName(getTexture()), Texture.class);
}
