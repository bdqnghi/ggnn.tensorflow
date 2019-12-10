@Override
public void load(AssetManager manager, ResourceData resources) {
    SaveData data = resources.getSaveData("billboardBatch");
    if (data != null) {
        setTexture((Texture) manager.get(data.loadAsset()));
        Config cfg = (Config) data.load("cfg");
        setUseGpu(cfg.useGPU);
        setAlignMode(cfg.mode);
    }
}
