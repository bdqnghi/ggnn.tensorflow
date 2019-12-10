@Override
protected void flush(int[] offsets) {
    int tp = 0;
    for (PointSpriteControllerRenderData data : renderData) {
        FloatChannel scaleChannel = data.scaleChannel;
        FloatChannel regionChannel = data.regionChannel;
        FloatChannel positionChannel = data.positionChannel;
        FloatChannel colorChannel = data.colorChannel;
        FloatChannel rotationChannel = data.rotationChannel;
        for (int p = 0; p < data.controller.particles.size; ++p, ++tp) {
            int offset = offsets[tp] * CPU_VERTEX_SIZE;
            int regionOffset = p * regionChannel.strideSize;
            int positionOffset = p * positionChannel.strideSize;
            int colorOffset = p * colorChannel.strideSize;
            int rotationOffset = p * rotationChannel.strideSize;
            vertices[offset + CPU_POSITION_OFFSET] = positionChannel.data[positionOffset + ParticleChannels.XOffset];
            vertices[offset + CPU_POSITION_OFFSET + 1] = positionChannel.data[positionOffset + ParticleChannels.YOffset];
            vertices[offset + CPU_POSITION_OFFSET + 2] = positionChannel.data[positionOffset + ParticleChannels.ZOffset];
            vertices[offset + CPU_COLOR_OFFSET] = colorChannel.data[colorOffset + ParticleChannels.RedOffset];
            vertices[offset + CPU_COLOR_OFFSET + 1] = colorChannel.data[colorOffset + ParticleChannels.GreenOffset];
            vertices[offset + CPU_COLOR_OFFSET + 2] = colorChannel.data[colorOffset + ParticleChannels.BlueOffset];
            vertices[offset + CPU_COLOR_OFFSET + 3] = colorChannel.data[colorOffset + ParticleChannels.AlphaOffset];
            vertices[offset + CPU_SIZE_AND_ROTATION_OFFSET] = scaleChannel.data[p * scaleChannel.strideSize];
            vertices[offset + CPU_SIZE_AND_ROTATION_OFFSET + 1] = rotationChannel.data[rotationOffset + ParticleChannels.CosineOffset];
            vertices[offset + CPU_SIZE_AND_ROTATION_OFFSET + 2] = rotationChannel.data[rotationOffset + ParticleChannels.SineOffset];
            vertices[offset + CPU_REGION_OFFSET] = regionChannel.data[regionOffset + ParticleChannels.UOffset];
            vertices[offset + CPU_REGION_OFFSET + 1] = regionChannel.data[regionOffset + ParticleChannels.VOffset];
            vertices[offset + CPU_REGION_OFFSET + 2] = regionChannel.data[regionOffset + ParticleChannels.U2Offset];
            vertices[offset + CPU_REGION_OFFSET + 3] = regionChannel.data[regionOffset + ParticleChannels.V2Offset];
        }
    }
    renderable.meshPart.size = bufferedParticlesCount;
    renderable.meshPart.mesh.setVertices(vertices, 0, bufferedParticlesCount * CPU_VERTEX_SIZE);
    renderable.meshPart.update();
}
