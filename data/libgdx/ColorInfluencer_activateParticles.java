@Override
public void activateParticles(int startIndex, int count) {
    for (int i = startIndex * colorChannel.strideSize, a = startIndex * alphaInterpolationChannel.strideSize, l = startIndex * lifeChannel.strideSize + ParticleChannels.LifePercentOffset, c = i + count * colorChannel.strideSize; i < c; i += colorChannel.strideSize, a += alphaInterpolationChannel.strideSize, l += lifeChannel.strideSize) {
        float alphaStart = alphaValue.newLowValue();
        float alphaDiff = alphaValue.newHighValue() - alphaStart;
        colorValue.getColor(0, colorChannel.data, i);
        colorChannel.data[i + ParticleChannels.AlphaOffset] = alphaStart + alphaDiff * alphaValue.getScale(lifeChannel.data[l]);
        alphaInterpolationChannel.data[a + ParticleChannels.InterpolationStartOffset] = alphaStart;
        alphaInterpolationChannel.data[a + ParticleChannels.InterpolationDiffOffset] = alphaDiff;
    }
}
