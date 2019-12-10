@Override
public void save(AssetManager manager, ResourceData data) {
    if (model != null) {
        SaveData saveData = data.createSaveData();
        saveData.saveAsset(manager.getAssetFileName(model), Model.class);
        saveData.save("index", model.meshes.indexOf(mesh, true));
    }
}
