@Override
public void init() {
    controllerChannel = controller.particles.getChannel(ParticleChannels.ParticleController);
    if (controllerChannel == null)
        throw new GdxRuntimeException("ParticleController channel not found, specify an influencer which will allocate it please.");
    scaleChannel = controller.particles.getChannel(ParticleChannels.Scale);
    rotationChannel = controller.particles.getChannel(ParticleChannels.Rotation3D);
    hasScale = scaleChannel != null;
    hasRotation = rotationChannel != null;
}
