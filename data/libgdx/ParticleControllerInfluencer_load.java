@Override
public void load(AssetManager manager, ResourceData resources) {
    SaveData data = resources.getSaveData();
    Array<IntArray> effectsIndices = data.load("indices");
    AssetDescriptor descriptor;
    Iterator<IntArray> iterator = effectsIndices.iterator();
    while ((descriptor = data.loadAsset()) != null) {
        ParticleEffect effect = (ParticleEffect) manager.get(descriptor);
        if (effect == null)
            throw new RuntimeException("Template is null");
        Array<ParticleController> effectControllers = effect.getControllers();
        IntArray effectIndices = iterator.next();
        for (int i = 0, n = effectIndices.size; i < n; i++) {
            templates.add(effectControllers.get(effectIndices.get(i)));
        }
    }
}
