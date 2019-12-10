@Override
public void init() {
    AspectTextureRegion region = regions.items[0];
    for (int i = 0, c = controller.emitter.maxParticleCount * regionChannel.strideSize; i < c; i += regionChannel.strideSize) {
        regionChannel.data[i + ParticleChannels.UOffset] = region.u;
        regionChannel.data[i + ParticleChannels.VOffset] = region.v;
        regionChannel.data[i + ParticleChannels.U2Offset] = region.u2;
        regionChannel.data[i + ParticleChannels.V2Offset] = region.v2;
        regionChannel.data[i + ParticleChannels.HalfWidthOffset] = 0.5f;
        regionChannel.data[i + ParticleChannels.HalfHeightOffset] = region.halfInvAspectRatio;
    }
}
