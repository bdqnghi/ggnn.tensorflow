@Override
public void update() {
    for (int i = 0, a = 0, l = ParticleChannels.LifePercentOffset, c = i + controller.particles.size * valueChannel.strideSize; i < c; i += valueChannel.strideSize, a += interpolationChannel.strideSize, l += lifeChannel.strideSize) {
        valueChannel.data[i] = interpolationChannel.data[a + ParticleChannels.InterpolationStartOffset] + interpolationChannel.data[a + ParticleChannels.InterpolationDiffOffset] * value.getScale(lifeChannel.data[l]);
    }
}
