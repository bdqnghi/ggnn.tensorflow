@Override
public ParticleController newObject() {
    ParticleController controller = templates.random().copy();
    controller.init();
    return controller;
}
