@Override
public void load(AssetManager manager, ResourceData data) {
    SaveData saveData = data.getSaveData();
    AssetDescriptor descriptor = saveData.loadAsset();
    if (descriptor != null) {
        Model model = (Model) manager.get(descriptor);
        setMesh(model.meshes.get((Integer) saveData.load("index")), model);
    }
}
