@Override
public void save(AssetManager manager, ResourceData resources) {
    SaveData data = resources.createSaveData("billboardBatch");
    data.save("cfg", new Config(useGPU, mode));
    data.saveAsset(manager.getAssetFileName(texture), Texture.class);
}
