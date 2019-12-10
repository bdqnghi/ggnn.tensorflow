@Override
public void allocateChannels() {
    renderData.positionChannel = controller.particles.addChannel(ParticleChannels.Position);
    renderData.regionChannel = controller.particles.addChannel(ParticleChannels.TextureRegion, TextureRegionInitializer.get());
    renderData.colorChannel = controller.particles.addChannel(ParticleChannels.Color, ColorInitializer.get());
    renderData.scaleChannel = controller.particles.addChannel(ParticleChannels.Scale, ScaleInitializer.get());
    renderData.rotationChannel = controller.particles.addChannel(ParticleChannels.Rotation2D, Rotation2dInitializer.get());
}
