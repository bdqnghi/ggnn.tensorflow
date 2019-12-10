public ControllerType getControllerType() {
    ParticleController controller = getEmitter();
    ControllerType type = null;
    if (controller.renderer instanceof BillboardRenderer)
        type = ControllerType.Billboard;
    else if (controller.renderer instanceof PointSpriteRenderer)
        type = ControllerType.PointSprite;
    else if (controller.renderer instanceof ModelInstanceRenderer)
        type = ControllerType.ModelInstance;
    else if (controller.renderer instanceof ParticleControllerControllerRenderer)
        type = ControllerType.ParticleController;
    return type;
}
