@Override
public void init(FloatChannel channel) {
    for (int i = 0, c = channel.data.length; i < c; i += channel.strideSize) {
        channel.data[i + ParticleChannels.XOffset] = channel.data[i + ParticleChannels.YOffset] = channel.data[i + ParticleChannels.ZOffset] = 0;
        channel.data[i + ParticleChannels.WOffset] = 1;
    }
}
