private void fillVerticesGPU(int[] particlesOffset) {
    int tp = 0;
    for (BillboardControllerRenderData data : renderData) {
        FloatChannel scaleChannel = data.scaleChannel;
        FloatChannel regionChannel = data.regionChannel;
        FloatChannel positionChannel = data.positionChannel;
        FloatChannel colorChannel = data.colorChannel;
        FloatChannel rotationChannel = data.rotationChannel;
        for (int p = 0, c = data.controller.particles.size; p < c; ++p, ++tp) {
            int baseOffset = particlesOffset[tp] * currentVertexSize * 4;
            float scale = scaleChannel.data[p * scaleChannel.strideSize];
            int regionOffset = p * regionChannel.strideSize;
            int positionOffset = p * positionChannel.strideSize;
            int colorOffset = p * colorChannel.strideSize;
            int rotationOffset = p * rotationChannel.strideSize;
            float px = positionChannel.data[positionOffset + ParticleChannels.XOffset], py = positionChannel.data[positionOffset + ParticleChannels.YOffset], pz = positionChannel.data[positionOffset + ParticleChannels.ZOffset];
            float u = regionChannel.data[regionOffset + ParticleChannels.UOffset];
            float v = regionChannel.data[regionOffset + ParticleChannels.VOffset];
            float u2 = regionChannel.data[regionOffset + ParticleChannels.U2Offset];
            float v2 = regionChannel.data[regionOffset + ParticleChannels.V2Offset];
            float sx = regionChannel.data[regionOffset + ParticleChannels.HalfWidthOffset] * scale, sy = regionChannel.data[regionOffset + ParticleChannels.HalfHeightOffset] * scale;
            float r = colorChannel.data[colorOffset + ParticleChannels.RedOffset];
            float g = colorChannel.data[colorOffset + ParticleChannels.GreenOffset];
            float b = colorChannel.data[colorOffset + ParticleChannels.BlueOffset];
            float a = colorChannel.data[colorOffset + ParticleChannels.AlphaOffset];
            float cosRotation = rotationChannel.data[rotationOffset + ParticleChannels.CosineOffset];
            float sinRotation = rotationChannel.data[rotationOffset + ParticleChannels.SineOffset];
            // bottom left, bottom right, top right, top left
            putVertex(vertices, baseOffset, px, py, pz, u, v2, -sx, -sy, cosRotation, sinRotation, r, g, b, a);
            baseOffset += currentVertexSize;
            putVertex(vertices, baseOffset, px, py, pz, u2, v2, sx, -sy, cosRotation, sinRotation, r, g, b, a);
            baseOffset += currentVertexSize;
            putVertex(vertices, baseOffset, px, py, pz, u2, v, sx, sy, cosRotation, sinRotation, r, g, b, a);
            baseOffset += currentVertexSize;
            putVertex(vertices, baseOffset, px, py, pz, u, v, -sx, sy, cosRotation, sinRotation, r, g, b, a);
            baseOffset += currentVertexSize;
        }
    }
}
