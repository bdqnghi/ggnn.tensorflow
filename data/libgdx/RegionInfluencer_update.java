@Override
public void update() {
    for (int i = 0, l = ParticleChannels.LifePercentOffset, c = controller.particles.size * regionChannel.strideSize; i < c; i += regionChannel.strideSize, l += lifeChannel.strideSize) {
        AspectTextureRegion region = regions.get((int) (lifeChannel.data[l] * (regions.size - 1)));
        regionChannel.data[i + ParticleChannels.UOffset] = region.u;
        regionChannel.data[i + ParticleChannels.VOffset] = region.v;
        regionChannel.data[i + ParticleChannels.U2Offset] = region.u2;
        regionChannel.data[i + ParticleChannels.V2Offset] = region.v2;
        regionChannel.data[i + ParticleChannels.HalfWidthOffset] = 0.5f;
        regionChannel.data[i + ParticleChannels.HalfHeightOffset] = region.halfInvAspectRatio;
    }
}
