/**
 * Updates the bounding box using the position channel.
 */
protected void calculateBoundingBox() {
    boundingBox.clr();
    FloatChannel positionChannel = particles.getChannel(ParticleChannels.Position);
    for (int pos = 0, c = positionChannel.strideSize * particles.size; pos < c; pos += positionChannel.strideSize) {
        boundingBox.ext(positionChannel.data[pos + ParticleChannels.XOffset], positionChannel.data[pos + ParticleChannels.YOffset], positionChannel.data[pos + ParticleChannels.ZOffset]);
    }
}
