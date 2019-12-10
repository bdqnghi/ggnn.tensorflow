@Override
public void init() {
    controllerChannel = controller.particles.getChannel(ParticleChannels.ParticleController);
    if (controllerChannel == null)
        throw new GdxRuntimeException("ParticleController channel not found, specify an influencer which will allocate it please.");
}
