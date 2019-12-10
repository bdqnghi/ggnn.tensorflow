private void reloadControllers() {
    Array<ParticleEffect> effects = new Array<ParticleEffect>();
    Array<ParticleController> controllers = new Array<ParticleController>();
    editor.assetManager.getAll(ParticleEffect.class, effects);
    for (ParticleEffect effect : effects) {
        controllers.addAll(effect.getControllers());
    }
    controllerPicker.setLoadedTemplates(controllers);
}
