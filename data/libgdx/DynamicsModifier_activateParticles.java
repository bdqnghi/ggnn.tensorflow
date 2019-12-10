@Override
public void activateParticles(int startIndex, int count) {
    super.activateParticles(startIndex, count);
    float start, diff;
    for (int i = startIndex * angularChannel.strideSize, c = i + count * angularChannel.strideSize; i < c; i += angularChannel.strideSize) {
        // Theta
        start = thetaValue.newLowValue();
        diff = thetaValue.newHighValue();
        if (!thetaValue.isRelative())
            diff -= start;
        angularChannel.data[i + ParticleChannels.VelocityThetaStartOffset] = start;
        angularChannel.data[i + ParticleChannels.VelocityThetaDiffOffset] = diff;
        // Phi
        start = phiValue.newLowValue();
        diff = phiValue.newHighValue();
        if (!phiValue.isRelative())
            diff -= start;
        angularChannel.data[i + ParticleChannels.VelocityPhiStartOffset] = start;
        angularChannel.data[i + ParticleChannels.VelocityPhiDiffOffset] = diff;
    }
}
