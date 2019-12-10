@Override
public <T extends ParticleControllerRenderData> int[] sort(Array<T> renderData) {
    float[] val = camera.view.val;
    float cx = val[Matrix4.M20], cy = val[Matrix4.M21], cz = val[Matrix4.M22];
    int count = 0, i = 0;
    for (ParticleControllerRenderData data : renderData) {
        for (int k = 0, c = i + data.controller.particles.size; i < c; ++i, k += data.positionChannel.strideSize) {
            distances[i] = cx * data.positionChannel.data[k + ParticleChannels.XOffset] + cy * data.positionChannel.data[k + ParticleChannels.YOffset] + cz * data.positionChannel.data[k + ParticleChannels.ZOffset];
            particleIndices[i] = i;
        }
        count += data.controller.particles.size;
    }
    qsort(0, count - 1);
    for (i = 0; i < count; ++i) {
        particleOffsets[particleIndices[i]] = i;
    }
    return particleOffsets;
}
