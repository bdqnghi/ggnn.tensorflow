public <T extends ParticleController> T createDefaultEmitter(ControllerType type, boolean select, boolean add) {
    T controller = null;
    if (type == ControllerType.Billboard) {
        controller = (T) createDefaultBillboardController();
    } else if (type == ControllerType.ModelInstance) {
        controller = (T) createDefaultModelInstanceController();
    } else if (type == ControllerType.PointSprite) {
        controller = (T) createDefaultPointController();
    } else if (type == ControllerType.ParticleController) {
        controller = (T) createDefaultParticleController();
    }
    if (add) {
        controller.init();
        addEmitter(controller, select);
    }
    return controller;
}
