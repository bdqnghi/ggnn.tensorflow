@Override
public void allocateChannels() {
    valueChannel = controller.particles.addChannel(valueChannelDescriptor);
    ParticleChannels.Interpolation.id = controller.particleChannels.newId();
    interpolationChannel = controller.particles.addChannel(ParticleChannels.Interpolation);
    lifeChannel = controller.particles.addChannel(ParticleChannels.Life);
}
