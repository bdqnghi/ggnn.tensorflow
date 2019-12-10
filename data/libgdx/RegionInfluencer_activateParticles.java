@Override
public void activateParticles(int startIndex, int count) {
    for (int i = startIndex * regionChannel.strideSize, c = i + count * regionChannel.strideSize; i < c; i += regionChannel.strideSize) {
        AspectTextureRegion region = regions.random();
        regionChannel.data[i + ParticleChannels.UOffset] = region.u;
        regionChannel.data[i + ParticleChannels.VOffset] = region.v;
        regionChannel.data[i + ParticleChannels.U2Offset] = region.u2;
        regionChannel.data[i + ParticleChannels.V2Offset] = region.v2;
        regionChannel.data[i + ParticleChannels.HalfWidthOffset] = 0.5f;
        regionChannel.data[i + ParticleChannels.HalfHeightOffset] = region.halfInvAspectRatio;
    }
}
