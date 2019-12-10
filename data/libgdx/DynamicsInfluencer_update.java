public void update() {
    // Clean previouse frame velocities
    if (hasAcceleration)
        Arrays.fill(accellerationChannel.data, 0, controller.particles.size * accellerationChannel.strideSize, 0);
    if (has2dAngularVelocity || has3dAngularVelocity)
        Arrays.fill(angularVelocityChannel.data, 0, controller.particles.size * angularVelocityChannel.strideSize, 0);
    // Sum all the forces/accelerations
    for (int k = 0; k < velocities.size; ++k) {
        velocities.items[k].update();
    }
    // Apply the forces
    if (hasAcceleration) {
        // Verlet integration
        for (int i = 0, offset = 0; i < controller.particles.size; ++i, offset += positionChannel.strideSize) {
            float x = positionChannel.data[offset + ParticleChannels.XOffset], y = positionChannel.data[offset + ParticleChannels.YOffset], z = positionChannel.data[offset + ParticleChannels.ZOffset];
            positionChannel.data[offset + ParticleChannels.XOffset] = 2 * x - previousPositionChannel.data[offset + ParticleChannels.XOffset] + accellerationChannel.data[offset + ParticleChannels.XOffset] * controller.deltaTimeSqr;
            positionChannel.data[offset + ParticleChannels.YOffset] = 2 * y - previousPositionChannel.data[offset + ParticleChannels.YOffset] + accellerationChannel.data[offset + ParticleChannels.YOffset] * controller.deltaTimeSqr;
            positionChannel.data[offset + ParticleChannels.ZOffset] = 2 * z - previousPositionChannel.data[offset + ParticleChannels.ZOffset] + accellerationChannel.data[offset + ParticleChannels.ZOffset] * controller.deltaTimeSqr;
            previousPositionChannel.data[offset + ParticleChannels.XOffset] = x;
            previousPositionChannel.data[offset + ParticleChannels.YOffset] = y;
            previousPositionChannel.data[offset + ParticleChannels.ZOffset] = z;
        }
    }
    if (has2dAngularVelocity) {
        for (int i = 0, offset = 0; i < controller.particles.size; ++i, offset += rotationChannel.strideSize) {
            float rotation = angularVelocityChannel.data[i] * controller.deltaTime;
            if (rotation != 0) {
                float cosBeta = MathUtils.cosDeg(rotation), sinBeta = MathUtils.sinDeg(rotation);
                float currentCosine = rotationChannel.data[offset + ParticleChannels.CosineOffset];
                float currentSine = rotationChannel.data[offset + ParticleChannels.SineOffset];
                float newCosine = currentCosine * cosBeta - currentSine * sinBeta, newSine = currentSine * cosBeta + currentCosine * sinBeta;
                rotationChannel.data[offset + ParticleChannels.CosineOffset] = newCosine;
                rotationChannel.data[offset + ParticleChannels.SineOffset] = newSine;
            }
        }
    } else if (has3dAngularVelocity) {
        for (int i = 0, offset = 0, angularOffset = 0; i < controller.particles.size; ++i, offset += rotationChannel.strideSize, angularOffset += angularVelocityChannel.strideSize) {
            float wx = angularVelocityChannel.data[angularOffset + ParticleChannels.XOffset], wy = angularVelocityChannel.data[angularOffset + ParticleChannels.YOffset], wz = angularVelocityChannel.data[angularOffset + ParticleChannels.ZOffset], qx = rotationChannel.data[offset + ParticleChannels.XOffset], qy = rotationChannel.data[offset + ParticleChannels.YOffset], qz = rotationChannel.data[offset + ParticleChannels.ZOffset], qw = rotationChannel.data[offset + ParticleChannels.WOffset];
            TMP_Q.set(wx, wy, wz, 0).mul(qx, qy, qz, qw).mul(0.5f * controller.deltaTime).add(qx, qy, qz, qw).nor();
            rotationChannel.data[offset + ParticleChannels.XOffset] = TMP_Q.x;
            rotationChannel.data[offset + ParticleChannels.YOffset] = TMP_Q.y;
            rotationChannel.data[offset + ParticleChannels.ZOffset] = TMP_Q.z;
            rotationChannel.data[offset + ParticleChannels.WOffset] = TMP_Q.w;
        }
    }
}
