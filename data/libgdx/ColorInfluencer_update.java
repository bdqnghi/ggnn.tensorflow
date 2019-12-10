@Override
public void update() {
    for (int i = 0, a = 0, l = ParticleChannels.LifePercentOffset, c = i + controller.particles.size * colorChannel.strideSize; i < c; i += colorChannel.strideSize, a += alphaInterpolationChannel.strideSize, l += lifeChannel.strideSize) {
        float lifePercent = lifeChannel.data[l];
        colorValue.getColor(lifePercent, colorChannel.data, i);
        colorChannel.data[i + ParticleChannels.AlphaOffset] = alphaInterpolationChannel.data[a + ParticleChannels.InterpolationStartOffset] + alphaInterpolationChannel.data[a + ParticleChannels.InterpolationDiffOffset] * alphaValue.getScale(lifePercent);
    }
}
