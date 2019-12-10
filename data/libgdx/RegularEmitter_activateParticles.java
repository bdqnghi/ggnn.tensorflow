public void activateParticles(int startIndex, int count) {
    int currentTotaLife = life + (int) (lifeDiff * lifeValue.getScale(percent)), currentLife = currentTotaLife;
    int offsetTime = (int) (lifeOffset + lifeOffsetDiff * lifeOffsetValue.getScale(percent));
    if (offsetTime > 0) {
        if (offsetTime >= currentLife)
            offsetTime = currentLife - 1;
        currentLife -= offsetTime;
    }
    float lifePercent = 1 - currentLife / (float) currentTotaLife;
    for (int i = startIndex * lifeChannel.strideSize, c = i + count * lifeChannel.strideSize; i < c; i += lifeChannel.strideSize) {
        lifeChannel.data[i + ParticleChannels.CurrentLifeOffset] = currentLife;
        lifeChannel.data[i + ParticleChannels.TotalLifeOffset] = currentTotaLife;
        lifeChannel.data[i + ParticleChannels.LifePercentOffset] = lifePercent;
    }
}
