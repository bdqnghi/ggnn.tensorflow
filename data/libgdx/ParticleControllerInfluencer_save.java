@Override
public void save(AssetManager manager, ResourceData resources) {
    SaveData data = resources.createSaveData();
    Array<ParticleEffect> effects = manager.getAll(ParticleEffect.class, new Array<ParticleEffect>());
    Array<ParticleController> controllers = new Array<ParticleController>(templates);
    Array<IntArray> effectsIndices = new Array<IntArray>();
    for (int i = 0; i < effects.size && controllers.size > 0; ++i) {
        ParticleEffect effect = effects.get(i);
        Array<ParticleController> effectControllers = effect.getControllers();
        Iterator<ParticleController> iterator = controllers.iterator();
        IntArray indices = null;
        while (iterator.hasNext()) {
            ParticleController controller = iterator.next();
            int index = -1;
            if ((index = effectControllers.indexOf(controller, true)) > -1) {
                if (indices == null) {
                    indices = new IntArray();
                }
                iterator.remove();
                indices.add(index);
            }
        }
        if (indices != null) {
            data.saveAsset(manager.getAssetFileName(effect), ParticleEffect.class);
            effectsIndices.add(indices);
        }
    }
    data.save("indices", effectsIndices);
}
