@Override
public void save(AssetManager manager, ResourceData resources) {
    SaveData data = resources.createSaveData();
    for (Model model : models) data.saveAsset(manager.getAssetFileName(model), Model.class);
}
