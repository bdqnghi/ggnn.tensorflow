public void activateParticles(int startIndex, int count) {
    if (hasAcceleration) {
        // Attention, this requires that some other influencer setting the position channel must execute before this influencer.
        for (int i = startIndex * positionChannel.strideSize, c = i + count * positionChannel.strideSize; i < c; i += positionChannel.strideSize) {
            previousPositionChannel.data[i + ParticleChannels.XOffset] = positionChannel.data[i + ParticleChannels.XOffset];
            previousPositionChannel.data[i + ParticleChannels.YOffset] = positionChannel.data[i + ParticleChannels.YOffset];
            previousPositionChannel.data[i + ParticleChannels.ZOffset] = positionChannel.data[i + ParticleChannels.ZOffset];
        /*
				//Euler intialization
				previousPositionChannel.data[i+ParticleChannels.XOffset] = 
				previousPositionChannel.data[i+ParticleChannels.YOffset] = 
				previousPositionChannel.data[i+ParticleChannels.ZOffset] = 0;
				*/
        }
    }
    if (has2dAngularVelocity) {
        // Rotation back to 0
        for (int i = startIndex * rotationChannel.strideSize, c = i + count * rotationChannel.strideSize; i < c; i += rotationChannel.strideSize) {
            rotationChannel.data[i + ParticleChannels.CosineOffset] = 1;
            rotationChannel.data[i + ParticleChannels.SineOffset] = 0;
        }
    } else if (has3dAngularVelocity) {
        // Rotation back to 0
        for (int i = startIndex * rotationChannel.strideSize, c = i + count * rotationChannel.strideSize; i < c; i += rotationChannel.strideSize) {
            rotationChannel.data[i + ParticleChannels.XOffset] = 0;
            rotationChannel.data[i + ParticleChannels.YOffset] = 0;
            rotationChannel.data[i + ParticleChannels.ZOffset] = 0;
            rotationChannel.data[i + ParticleChannels.WOffset] = 1;
        }
    }
    for (int k = 0; k < velocities.size; ++k) {
        velocities.items[k].activateParticles(startIndex, count);
    }
}
