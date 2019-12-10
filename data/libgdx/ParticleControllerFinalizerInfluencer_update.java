@Override
public void update() {
    for (int i = 0, positionOffset = 0, c = controller.particles.size; i < c; ++i, positionOffset += positionChannel.strideSize) {
        ParticleController particleController = controllerChannel.data[i];
        float scale = hasScale ? scaleChannel.data[i] : 1;
        float qx = 0, qy = 0, qz = 0, qw = 1;
        if (hasRotation) {
            int rotationOffset = i * rotationChannel.strideSize;
            qx = rotationChannel.data[rotationOffset + ParticleChannels.XOffset];
            qy = rotationChannel.data[rotationOffset + ParticleChannels.YOffset];
            qz = rotationChannel.data[rotationOffset + ParticleChannels.ZOffset];
            qw = rotationChannel.data[rotationOffset + ParticleChannels.WOffset];
        }
        particleController.setTransform(positionChannel.data[positionOffset + ParticleChannels.XOffset], positionChannel.data[positionOffset + ParticleChannels.YOffset], positionChannel.data[positionOffset + ParticleChannels.ZOffset], qx, qy, qz, qw, scale);
        particleController.update();
    }
}
