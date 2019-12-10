@Override
public void activateParticles(int startIndex, int count) {
    for (int i = startIndex * positionChannel.strideSize, c = i + count * positionChannel.strideSize; i < c; i += positionChannel.strideSize) {
        spawnShapeValue.spawn(TMP_V1, controller.emitter.percent);
        TMP_V1.mul(controller.transform);
        positionChannel.data[i + ParticleChannels.XOffset] = TMP_V1.x;
        positionChannel.data[i + ParticleChannels.YOffset] = TMP_V1.y;
        positionChannel.data[i + ParticleChannels.ZOffset] = TMP_V1.z;
    }
}
