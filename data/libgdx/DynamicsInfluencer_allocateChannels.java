@Override
public void allocateChannels() {
    for (int k = 0; k < velocities.size; ++k) {
        velocities.items[k].allocateChannels();
    }
    // Hack, shouldn't be done but after all the modifiers allocated their channels
    // it's possible to check if we need to allocate previous position channel
    accellerationChannel = controller.particles.getChannel(ParticleChannels.Acceleration);
    hasAcceleration = accellerationChannel != null;
    if (hasAcceleration) {
        positionChannel = controller.particles.addChannel(ParticleChannels.Position);
        previousPositionChannel = controller.particles.addChannel(ParticleChannels.PreviousPosition);
    }
    // Angular velocity check
    angularVelocityChannel = controller.particles.getChannel(ParticleChannels.AngularVelocity2D);
    has2dAngularVelocity = angularVelocityChannel != null;
    if (has2dAngularVelocity) {
        rotationChannel = controller.particles.addChannel(ParticleChannels.Rotation2D);
        has3dAngularVelocity = false;
    } else {
        angularVelocityChannel = controller.particles.getChannel(ParticleChannels.AngularVelocity3D);
        has3dAngularVelocity = angularVelocityChannel != null;
        if (has3dAngularVelocity)
            rotationChannel = controller.particles.addChannel(ParticleChannels.Rotation3D);
    }
}
