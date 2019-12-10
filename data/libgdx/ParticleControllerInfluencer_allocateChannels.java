@Override
public void allocateChannels() {
    particleControllerChannel = controller.particles.addChannel(ParticleChannels.ParticleController);
}
