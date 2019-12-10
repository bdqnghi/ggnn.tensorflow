@Override
public void allocateChannels() {
    renderData.positionChannel = controller.particles.addChannel(ParticleChannels.Position);
}
