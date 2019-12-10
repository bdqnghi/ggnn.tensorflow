@Override
public void update() {
    for (int i = 0, positionOffset = 0, c = controller.particles.size; i < c; ++i, positionOffset += renderData.positionChannel.strideSize) {
        ModelInstance instance = renderData.modelInstanceChannel.data[i];
        float scale = hasScale ? renderData.scaleChannel.data[i] : 1;
        float qx = 0, qy = 0, qz = 0, qw = 1;
        if (hasRotation) {
            int rotationOffset = i * renderData.rotationChannel.strideSize;
            qx = renderData.rotationChannel.data[rotationOffset + ParticleChannels.XOffset];
            qy = renderData.rotationChannel.data[rotationOffset + ParticleChannels.YOffset];
            qz = renderData.rotationChannel.data[rotationOffset + ParticleChannels.ZOffset];
            qw = renderData.rotationChannel.data[rotationOffset + ParticleChannels.WOffset];
        }
        instance.transform.set(renderData.positionChannel.data[positionOffset + ParticleChannels.XOffset], renderData.positionChannel.data[positionOffset + ParticleChannels.YOffset], renderData.positionChannel.data[positionOffset + ParticleChannels.ZOffset], qx, qy, qz, qw, scale, scale, scale);
        if (hasColor) {
            int colorOffset = i * renderData.colorChannel.strideSize;
            ColorAttribute colorAttribute = (ColorAttribute) instance.materials.get(0).get(ColorAttribute.Diffuse);
            BlendingAttribute blendingAttribute = (BlendingAttribute) instance.materials.get(0).get(BlendingAttribute.Type);
            colorAttribute.color.r = renderData.colorChannel.data[colorOffset + ParticleChannels.RedOffset];
            colorAttribute.color.g = renderData.colorChannel.data[colorOffset + ParticleChannels.GreenOffset];
            colorAttribute.color.b = renderData.colorChannel.data[colorOffset + ParticleChannels.BlueOffset];
            if (blendingAttribute != null)
                blendingAttribute.opacity = renderData.colorChannel.data[colorOffset + ParticleChannels.AlphaOffset];
        }
    }
    super.update();
}
