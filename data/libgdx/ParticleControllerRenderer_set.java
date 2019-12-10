@Override
public void set(ParticleController particleController) {
    super.set(particleController);
    if (renderData != null)
        renderData.controller = controller;
}
