public Array<ParticleEffect> getParticleEffects(Array<ParticleController> controllers, Array<ParticleEffect> out) {
    out.clear();
    assetManager.getAll(ParticleEffect.class, out);
    for (int i = 0; i < out.size; ) {
        ParticleEffect effect = out.get(i);
        Array<ParticleController> effectControllers = effect.getControllers();
        boolean remove = true;
        for (ParticleController controller : controllers) {
            if (effectControllers.contains(controller, true)) {
                remove = false;
                break;
            }
        }
        if (remove) {
            out.removeIndex(i);
            continue;
        }
        ++i;
    }
    return out;
}
