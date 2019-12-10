@Override
public void load(AssetManager manager, ResourceData resources) {
    SaveData data = resources.getSaveData("pointSpriteBatch");
    if (data != null)
        setTexture((Texture) manager.get(data.loadAsset()));
}
