private void rebuildActiveControllers() {
    // rebuild list
    Array<ParticleController> effectControllers = effect.getControllers();
    effectControllers.clear();
    for (ControllerData controllerData : controllersData) {
        if (controllerData.enabled)
            effectControllers.add(controllerData.controller);
    }
    // System.out.println("rebuilding active controllers");
    effect.init();
    effect.start();
}
