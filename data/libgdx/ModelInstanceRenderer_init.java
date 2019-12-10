@Override
public void init() {
    renderData.modelInstanceChannel = controller.particles.getChannel(ParticleChannels.ModelInstance);
    renderData.colorChannel = controller.particles.getChannel(ParticleChannels.Color);
    renderData.scaleChannel = controller.particles.getChannel(ParticleChannels.Scale);
    renderData.rotationChannel = controller.particles.getChannel(ParticleChannels.Rotation3D);
    hasColor = renderData.colorChannel != null;
    hasScale = renderData.scaleChannel != null;
    hasRotation = renderData.rotationChannel != null;
}
