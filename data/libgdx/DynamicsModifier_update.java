@Override
public void update() {
    int lifeOffset = ParticleChannels.LifePercentOffset, strengthOffset = 0, forceOffset = 0;
    for (int i = 0, c = controller.particles.size; i < c; ++i, strengthOffset += strengthChannel.strideSize, forceOffset += accelerationChannel.strideSize, lifeOffset += lifeChannel.strideSize) {
        float strength = strengthChannel.data[strengthOffset + ParticleChannels.VelocityStrengthStartOffset] + strengthChannel.data[strengthOffset + ParticleChannels.VelocityStrengthDiffOffset] * strengthValue.getScale(lifeChannel.data[lifeOffset]);
        TMP_V3.set(MathUtils.random(-1, 1f), MathUtils.random(-1, 1f), MathUtils.random(-1, 1f)).nor().scl(strength);
        accelerationChannel.data[forceOffset + ParticleChannels.XOffset] += TMP_V3.x;
        accelerationChannel.data[forceOffset + ParticleChannels.YOffset] += TMP_V3.y;
        accelerationChannel.data[forceOffset + ParticleChannels.ZOffset] += TMP_V3.z;
    }
}
