@Override
public void load(AssetManager manager, ResourceData resources) {
    SaveData data = resources.getSaveData();
    AssetDescriptor descriptor;
    while ((descriptor = data.loadAsset()) != null) {
        Model model = (Model) manager.get(descriptor);
        if (model == null)
            throw new RuntimeException("Model is null");
        models.add(model);
    }
}
